/*
1. �������� ���� Int, �� ���� ������ ������������ ���� int.
���������, ����� ��� ������� �������� (� ������� main()) ��� ����������� ���� int �� ��������� ������:
//��� ����������� ������ ������������ ���� int
	int a = 8, b = 3, res = 0;
	res = a + b;
	res = a / b;
	c�ut << res << �ndl;
//��� ����������� �ᒺ��� ���� Int, ���������� ��� ���� ���� ������
	Int a(8), b(3), res; // res: [0]
	res = a.sum(b); // res : [11]
	c�ut << res.getValue() << �ndl; // 11
	res = a.div(b); // res : [2]
	c�ut << res.getValue() << �ndl; // 2



����� ���� ������ ����� ������� ���� ��� int.
��������
	������������( �� ������������� �� � ����� ����������)
	������ ������� ��  ���� �����
	����� ��������� �������� �� �����
	����� ��������� �� ������ ���������� ����� Int ������ ���������� ����� Int(��������� ��������� ���� ���������� ����� � ���������� Int Sum(const Int& num))
	����� �������� �� ������ ���������� ����� Int ������ ���������� ����� Int
	����� ��������  ������ ���������� ����� Int  �� ����� ��������� ����� Int
	����� �������  ������ ���������� ����� Int  �� ����� ��������� ����� Int(���������, �� ������ �� 0 ���������)



�������� ��������, � ��� ������ ������� ��� �ᒺ��� ����� Int, ��� � ���� ������ �����������. ������� ��� ������������� �ᒺ���, ��������� ��������� ��������,
� ���� ��������� ��������� �� �����.
���̲���! �� 12 ���� ���������� ����� ������, �� ��������� 䳿 �������� ��������� *=, +=, -=, /=

*/
#include <iostream>

using namespace std;

class Int
{
private:
	int firstNumber;
public:
	Int()
	{
		this->firstNumber = 0;
	}

	Int(int number)
	{
		this->firstNumber = number;
	}

	void Show()
	{
		cout << this->firstNumber << endl;
	}

	void SetNumber(const int& number)
	{
		this->firstNumber = number;
	}

	int GetNumber()
	{
		return this->firstNumber;
	}

	Int GetSum(Int& number)
	{

		return this->firstNumber + number.GetNumber();
	}

	Int GetSub(Int& number)
	{
		return this->firstNumber - number.GetNumber();
	}

	Int GetMul(Int& number)
	{
		return this->firstNumber * number.GetNumber();
	}

	Int GetDiv(Int& number)
	{
		if (number.GetNumber() == 0)
		{
			cout << "Error. Number = 0\n";
		}
		else
			return this->firstNumber / number.GetNumber();
	}
};


int main()
{
	Int a = 10;
	Int b = 4;
	Int res;

	res = a.GetSum(b);

	a.Show();
	b.Show();
	cout << "Result = ";
	res.Show();

	res = a.GetSub(b);
	cout << "Result = ";
	res.Show();

	res = a.GetMul(b);
	cout << "Result = ";
	res.Show();

	res = a.GetDiv(b);
	cout << "Result = ";
	res.Show();

}