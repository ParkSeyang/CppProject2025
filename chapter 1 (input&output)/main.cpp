#include <iostream> // 입출력 함수를 사용하기 위한 cpp 라이브러리

/*
* cpp 추가된 문법을 이해한다.
* 1. std:: 분석
* 2. 코드에서 "std::"지워보세요.
* 3. 결과 : 식별자 "cout"이 정의되어 있지 않습니다.
* Q. iostream 추가했는데 왜 "cout"을 찾을 수 없나요?
* A. "cout" 특별한 공간에 존재하기 때문에 찾을 수 없어요.
* Q2. 그 특별한 공간을 어떻게 사용해야 할까요?
* A. namespace에 대한 이해가 필요합니다.
*/

// A회사 ACOM, B회사 BCOM
// ACOM에서 만든 goods BCOM에서 만든 goods
// 문제점 : 특정 키워드의 이름들이 같으면 컴퓨터가 구분해서 판별할 수 없다. -> 에러가 발생한다.
// 변수의 이름 앞에 이름공간을 추가해준다.
// ACOM - goods다.
// BCOM - goods다.

namespace ACOM
{
    char goods[10];
    int sum;
}

namespace BCOM
{
    char goods[10];
    int sum;
}

#pragma region C++ 첫날수업
// 작성일 : 2025-04-10
// 작성자 : 박세양
// 주제 : C언어와 C++언어의 공통점과 차이점

// ##공통점
// 1. 기본적인 문접은 일치하다.
// 2. 변수, 반복문(for,while), 제어문(if,switch)
// 3. 배열, 함수
// 4. 포인터, 구조체, 파일 입출력

// ##차이점
// 1. 입출력을 사용하는 함수 변경 (참조자)
// 2. 구조체 선언 할때 이름으로만 선언을 해도된다.
// 3. 함수 기능 추가 (오버로딩, 디폴트 연산자)
// 4. 객체(클래스) 지향 프로그래밍

// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h> // c형태의 입력 출력 방식을 구현해볼것
// #include <iostream> // cpp 형태의 입출력 라이브러리
// #define SIZE 5
// int main()
// {
//     // 출력 함수 선언  캐릭터 이름 입력, 출력 코드를 c언어로 구현해보세요. ~25
//     // c언어의 입출력 style
//     char name[20]; // 공통으로 사용하는 변수
// 
//     printf("c언어의 입출력코드.\n");
//     printf("이름을 입력해주세요.\n");
//     scanf("%s", name);
// 
//     printf("캐릭터의 이름 : %s\n", name);
// 
//     std::cout << std::endl;
// 
//     //cpp 입출력 style
//     std::cout << "cpp 입출력 코드" << std::endl;
//     std::cout << "이름을 입력해주세요." << std::endl;
// 
//     std::cin >> name;
// 
//     std::cout << "캐릭터의 이름 : " << name << std::endl;
// 
//     // 처음 보는 문법 (cpp)
//     // 1. 이름:: = namespace
//     // 2. printf("%s",name) => cout << name 연산자 오버로딩
//     // 3. 같은 기능을 수행한다. std::endl = \n
// 
// }


#pragma endregion


int main()
{
    std::cout << "Ch1" << std::endl;
    std::cout << "소주제 : 이름 공간에 대한 이해" << std::endl;

    // 이름 공간의 첫번째 예제.
    // 같은 이름의 변수를 사용하는 문법이 추가 되었다.
    // 사용법 : 이름::변수;

    std::cin >> ACOM::goods;
    std::cout << "A회사의 상품 이름 : " << ACOM::goods << std::endl;
    
    std::cin >> BCOM::goods;
    std::cout << "B회사의 상품 이름 : " << BCOM::goods << std::endl;


    // 문제1. 숫자를 5개 입력을 받아서 A회사의 합계 저장을 한다음, 숫자를 5개 입력을 받아서 
    // B회사의 합계에도 저장을 해주세요.
    // A회사 B회사 합수 변수 이름은 int sum 동일하게 작성해주세요.

    // 1. std:: cin int값 입력 받기
    // 2. for 문 5회 더하기
    // 3. 이름 공간의 sum 변수에 저장하고 출력하기.
    int number = 0;
    for (int i = 0; i < 5; i++)
    {
       std::cout << i + 1 << "상품의 갯수를 입력해주세요." << std::endl;
       std::cin >> number;
       std::cout << std::endl;
       // 갯수를 입력 받은 후에 A회사의 총합을 의미하는 변수에 더해줘야한다.
       ACOM::sum += number;

    }
    std::cout << "A회사의 합계 : " << ACOM::sum << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << i + 1 << "상품의 갯수를 입력해주세요." << std::endl;
        std::cin >> number;
        std::cout << std::endl;
        // 갯수를 입력 받은 후에 A회사의 총합을 의미하는 변수에 더해줘야한다.
        BCOM::sum += number;
    }

    std::cout << "B회사의 합계 : " << BCOM::sum << std::endl;
}
    // ToyProject 프로젝트, c++ 추가된 문법을 게임에 적용하는 시간,
    // 겜프1, 겜프2 개인 프로젝트, cpp 버젼으로 이식하는 시도,
    // namespace 여러분의 게임에 적용하는것
    // c버젼 프로젝트 -> c++ 프로젝트 변경
    // readme 오늘 날짜 Change log
