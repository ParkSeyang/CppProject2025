#pragma once

// 객체 지향 프로그래밍 OOP(Object Oriented Programming)

#include <iostream>
#include <stdexcept>  // 예외처리에 필요한 코드들을 제공해주는 헤더파일
using std::cout;
using std::endl;
using std::cin;
using std::string;

// 예제 1. 좌표를 표현하는 구조체 Pos, 정보 은닉
// 목표. 콘솔 화면 창에 사격형을 그리는 객체를 만들어보세요.

// 목표 : 사각형을 만든다, 점, 콘솔창에서 구현한다.
// 키워드 : 접근 제어 지시자, 


// struct, 기본 설계가 public 되어 있고 class는 private로 되어있다.

class Point
{
private:
	int x;
	int y;

public:
	Point() {}

	Point(int x, int y) : x(x), y(y) {}
};

// 접근 제어 지시자
// private, public, Protected

// private : 객체 내부에서만 허용되는 접근 방식

// public : 객체 외부에서도 허용되는 접근 방식

// protected : 

// class 키워드 기본적으로 private로 구현된다.

// 정보 은닉 : 외부에서 사용하지 못하게 막는 것

// Q1. 왜 외부에서 사용하면 안되는가?
// A1. 안전하게 구현된 코드에서만 외부로 노출되도록 만든다.

class cPoint
{
private:
	int x;
	int y;
public:
	// 생성자 자동으로 만들어주는 기능.
	// 직접 생성자를 선언하면 디폴트 생성자가 자동으로 만들어지지 않는다.

	cPoint() {}

	cPoint(int outX, int outY)
	{
		if (outX < 0 || outY < 0)
		{
			cout << "cPoint를 생성할 때 에러가 발생했습니다." << endl;
			// 예외 처리
			// 실행이 되면 코드가 멈추고 다음 내용을 출력한다.
			//throw std::invalid_argument(".");
		}

		x = outX;
		y = outY;
	}

	int GetX() const;
	int GetY() const;

	void SetX(int amount);
	void SetY(int amount);

};

class Rectangle
{
private:
	cPoint leftUpPoint;	   // x작고 y 큰
	cPoint rightDownPoint;  // x크고 y 작

public:

	Rectangle() {}

	Rectangle(cPoint p1, cPoint p2) // p1, p2 좌표가 lu, rd 형식이 아닐 경우에는 문제가 생길 수 있다.
	{
		if (p1.GetX() < p2.GetX() && p1.GetY() > p2.GetY())
		{
			leftUpPoint = p1;
			rightDownPoint = p2;
		}
		else
		{
			leftUpPoint = p2;
			rightDownPoint = p1;
		}

		// p1 x좌표 p2 x좌표 비교
		// p1 y좌표 p2 y좌표 비교
		// p1, p2 
	}

	Rectangle(int x1, int x2, int y1, int y2)
	{
		cPoint newLeftUp;
		cPoint newRightDown;

		if (x1 < x2)
		{
			newLeftUp.SetX(x1);
			newRightDown.SetX(x2);
		}
		else if (x1 > x2)
		{
			newLeftUp.SetX(x2);
			newRightDown.SetX(x1);
		}
		else
		{
			cout << "x의 좌표가 같을 수 없습니다." << endl;
		}

		if (y1 < y2)
		{
			newLeftUp.SetY(y2);
			newRightDown.SetY(y1);
		}
		else if (y1 > y2)
		{
			newLeftUp.SetY(y1);
			newRightDown.SetY(y2);
		}
		else
		{
			cout << "y의 좌표가 같을 수 없습니다." << endl;
		}


		leftUpPoint = newLeftUp;
		rightDownPoint = newRightDown;
	}

	void Draw();
};


void Example1();
void Example2();
void Example3();