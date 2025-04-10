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
}