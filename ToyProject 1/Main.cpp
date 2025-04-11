/*
* ��ǥ :  cpp ���� ȭ�� �����ϱ�
* ���� : Windows.h Gotoxy() �籸��
* ����� : cpp ������� ������ϱ�
* �̷� : namespace �����غ���
*/
/*
* �̸������� ����� ���� ����
* 1. �ٸ� �� ������Ʈ�� copy paste ��ĥ �� �߻��ϴ� ������ �ּ�ȭ �� �� �ִ�.
* 2. �̸������� ������ �̸��� ���ؼ� �ڵ带 �з���  �� �ִ�.
*/
/*
*  ��ǥ2 : �÷��̾��� �̵��� �����ڸ� ����Ͽ� �Լ�ȭ �غ���.
*/
#include <iostream>
#include <Windows.h> // Ŀ���� ��ġ�� �ű�� �Լ� SetCursorPosition
#include <conio.h> // _getch �Է� ����Լ�
namespace ConsoleUtils
{
	void GoToXY(int x, int y)
	{
		COORD pos = { x,y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}

	void InputPlayerKey(int& x, int& y)
	{
		if (_kbhit())
		{
			if (GetAsyncKeyState(VK_LEFT)) // Ű���� '<-' ��������
			{
				x--;
				if (x<0)
				{
					x = 0;
				}
			}
			else if (GetAsyncKeyState(VK_RIGHT))
			{
				x++;
				if (x > 30)
				{
					x = 30;
				}
			}
			else if (GetAsyncKeyState(VK_UP))
			{
				y--;
				if (y<0)
				{
					y = 0;
				}
			}
			else if (GetAsyncKeyState(VK_DOWN))
			{
				y++;
				if (y> 30)
				{
					y = 30;
				}
			}
		}
	}

}

int main()
{
	// ���� 1. 10,10 ��ǥ�� �÷��̾��� ���� �ؽ�Ʈ�� ����غ�����.
	ConsoleUtils::GoToXY(10, 10);
	std::cout << "�÷��̾� �� ����";

	// ���� 2. �÷��̾� �� �̸��� �Է¹޾Ƽ� �÷��̾��� ���� �ؽ�Ʈ ���� �Ʒ��� ����ϱ�.
	// �Է� ���� ������ �޾Ƽ�, 1�������� �÷��̾� �̸� �߰��ϱ�.
	//2�� ������ ȭ�鿡 �÷��̾� ������ ����ϱ�

	

	char name[10];

	while (true)
	{
		int inputNumber = 0;

		std::cout << "1. ������� �̸��� ���� �Ҽ� �ֽ��ϴ�."<< std::endl;
		std::cout << "2. �÷��̾��� ������ ȭ�鿡 ����մϴ�" << std::endl;
		std::cin >> inputNumber;

		if (inputNumber == 1)
		{
			std::cout << "�̸��� �Է����ּ���. : " << std::endl;
			std::cin >> name;			
		}
		else if (inputNumber == 2)
		{
			ConsoleUtils::GoToXY(10, 10);
			std::cout << "�÷��̾� �� ����";
			ConsoleUtils::GoToXY(10, 11);
			std::cout << "�÷��̾��� �̸� :" << name;
			_getch();
		}
		else
		{
			std::cout << "Error" << std::endl;
			break;
		}
		system("cls");
	
	}
	
	int height = 5;
		int length = 5;
	while (true) // �÷��̾��� �̵�����
	{
		system("cls");
		ConsoleUtils::InputPlayerKey(height, length);
		std::cout << "�÷��̾� �� ��ǥ : " << "[" << height << "," << length << "]" << std::endl;
		ConsoleUtils::GoToXY(height, length);
		std::cout << "��";
	}


}