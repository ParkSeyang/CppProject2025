/*
* �ۼ��� : 2025-04-11
* �ۼ��� : �赿��
* ���� :  ������
* C,cpp ������ 2, ������
*/
#include <iostream>

/*
* ������ ���ظ� ���� �Լ� ���� swap �Լ� �����ϱ�
*/

void SwapByValue(int num1, int num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}// SwapByValue �Լ��� main �Լ��� ȣ�� ���� �� num1,num2 �� ������ ������ ������ ����ǳ���? X 
// ���� : �Լ����ο��� ����ǰ��� �ٲ���� ���� ��ȯ���� �����Ƿ� �������ʴ´�. 
void SwapByRef(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
} // num1,num2 ���޵� ������ ������ ����ȴ�.

// �Լ� �����ε�. �Լ��� �̸��� ���Ƶ� �Ű������� Ÿ���� �ٸ��� ������ �� �ִ�.
void SwapByRef(int& num1, int& num2) // ���ǻ��� &num1 ������ �ּҸ� ��ȯ�Ѵ�.
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// ���� 1. SwapPointer �Լ��� ����� . �ּҸ� �����ڷ� �����ϴ� �Լ��� �����.
// int Ÿ��
// ������ �����ڷ� ������ֳ���? �ƴմϴ�  �ּ�, �迭 ���� �����ڷ� ������ִ�
// int arr[3] = {1,2,3}
// int &arrRef1 = arr[0]; <- arrRef1�� arr[0]�� �����̴�.

// int num1 = 10;
// int *num1ptr = &num1;
// int* &num1ref = num1ptr; <- num1ref�� num1ptr�� �����̴�.

void SwapPointer(int *&num1ptr, int *&num2ptr)
{
	int* temp = num1ptr;
	num1ptr = num2ptr;
	num2ptr = temp;
}
int main()
{
	// namespace std�� ���ǵǾ��ִ� ������ cout �����ͼ� ����ϰڴ�.
	std::cout << "2�� ������\n" << std::endl;

	// ������ ����� ����� ���еȴ�.
	// �Լ��� ����� ����� ���еȴ�.

	int num1 = 1;

	int* num1ptr = &num1;  // num1ptr ������ ������ num1 �ּҸ� �����Ѵ�.
	
	int& num1ref = num1; // num1������ �����ϴ� num1ref��. num1ref�� num1�� �����ڴ�. num1�� ������ �߰����ְڴ� ������ num1ref��.

	// int num2 = num1; // num2�� ���� 1�̴�.
	// num1 = num1 + 1; // num1�� ���� 2�̴�.

	num1ref += 1;

	std::cout << "num1�� �� : " << num1 << std::endl; // ������ ��� cpp�������� �ۼ�
	std::cout << "num1�� �� num1ref �����ڷ� ȣ�� : " << num1ref << std::endl;

	std::cout << std::endl;
	//

	int input = 0;
	// scanf("%d",&input)
	// �������� Ȱ���� ���� C++ �����ڸ� ����ؼ� �Լ��� ����� �� *,& ��ȣ�� ������� �ʰ� ǥ���� �� �ִ�.
	// std::cin >> input;

	// SwapByValueRef �� ���� ����
	std::cout << "Call by Value �� Call by Reference ����" << std::endl;
	
	std::cout << std::endl;

	int value1 = 10, value2 = 20; // �Լ����̿��ؼ� value1, value2 ����Ǿ ����ϰ� �����

	std::cout << "Call By Value ���" << std::endl;
	std::cout << "value 1 : " << value1 << std::endl;
	std::cout << "value 2 : " << value2 << std::endl;
	SwapByValue(value1, value2);
	std::cout << "value 1 : " << value1 << std::endl;
	std::cout << "value 2 : " << value2 << std::endl;

	std::cout << std::endl;

	std::cout << "Call By Reference ���" << std::endl;
	std::cout << "value 1 : " << value1 << std::endl;
	std::cout << "value 2 : " << value2 << std::endl;
	SwapByRef(&value1, &value2); // �ּҸ� ����������Ѵ� �ּҿ����ڸ� �����ϰ� �ۼ����ϸ� ����������.
	std::cout << "value 1 : " << value1 << std::endl;
	std::cout << "value 2 : " << value2 << std::endl;

	std::cout << std::endl;

    std::cout << "Call By Value ���" << std::endl;
	std::cout << "value 1 : " << value1 << std::endl;
	std::cout << "value 2 : " << value2 << std::endl;
    SwapByRef(value1, value2);
	std::cout << "value 1 : " << value1 << std::endl;
	std::cout << "value 2 : " << value2 << std::endl;

	
	std::cout << "�������� ����" << std::endl;

	int ssnum1 = 1;
	int ssnum2 = 100;

	int* ssnum1ptr = &ssnum1;
	int* ssnum2ptr = &ssnum2;

	std::cout << std::endl;

	std::cout << "ssnum1ptr�� ���� �� ��� :  " << *ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr�� ���� �� ��� :  " << *ssnum2ptr << std::endl;

	SwapPointer(ssnum1ptr, ssnum2ptr); // ����� Ȱ���ϱ����ؼ��� �ּҿ� ���� ���ذ� �ʿ�.

	std::cout << std::endl;

	std::cout << "ssnum1ptr�� ���� �� ��� :  " << *ssnum1ptr << std::endl;
	std::cout << "ssnum2ptr�� ���� �� ��� :  " << *ssnum2ptr << std::endl;

	// �����ڸ� ����ϸ� �����Ϳ� ���� ��ȣ�� 1�� �ٿ��� ǥ���� �� �ִ�.
	// int,int ���� �ٲ� ���� �����ڸ� ����Ѵ�.
	// int*,int* ���� �ٲ� ���� int*&(�������̸�) , int*&(�������̸�) �̷��� ����ؾߵȴ�.

	// ������ ��� �� �����ؾ��� ����
	
	// int& ref <- ���� X 1. �����ڴ� ����� ���ÿ� �ʱ�ȭ�� �ʿ��ϴ�.

	// ���� 
	// int aaa = 10;
	// int& aaaref = aaa; <- ���� ���� O

	// 2.const �� Ȱ���ؼ� �Լ��� ����ϴ� ������� ���̵带 �ȳ����� ��
	// void Func(const int * num1); num1�����ϴ� ���� ������������
	// void Func(const int& num1); num1���� ���� ������������

	// return Ÿ�Կ� �����ڸ� ������ �� �����ؾ� �Ѵ�.

	// main�Լ������� ����          |  �Լ��� �� ����(int func())        |    �Լ����� ������ ����(int& func())
	// int a = func();             |   a�� ���� �����                  |    a�� ���� �����. func�ȿ���  ���������� return ���� �ʾƾ���.
	//                             |                                   |
	// int &a = func();            |   a�� func���� ���� ���������Ѵ�.   |   func�ȿ��� ���������� return �����ʾƾ���
	//                             |   a���� 10�� �������� �Ѵ�.       |
	//                             |   a = 9; 10�� 9�� �ض�.            | 
	//                             |   X ������ �����߻� X              |
	//                             |                                   |
	// const int & a = func();     |   a���� 10�� �������� �Ѵ�.       |    func�ȿ��� ���������� return �����ʾƾ���
	//                             |    10�� ������ a����Ѵ�.           |
	//	                           |    const int& �� = 10;             |
}                                       