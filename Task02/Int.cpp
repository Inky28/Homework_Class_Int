#include <iostream>
#include "Int.h"

using namespace std;

Int::Int()
{
	this->firstNumber = 0;
}

Int::Int(int number)
{
	this->firstNumber = number;
}

void Int::Show()
{
	cout << this->firstNumber << endl;
}

void Int::SetNumber(const int& number)
{
	this->firstNumber = number;
}

int Int::GetNumber()
{
	return this->firstNumber;
}

Int Int::GetSum(Int& number)
{

	return this->firstNumber + number.GetNumber();
}

Int Int::GetSub(Int& number)
{
	return this->firstNumber - number.GetNumber();
}

Int Int::GetMul(Int& number)
{
	return this->firstNumber * number.GetNumber();
}

Int Int::GetDiv(Int& number)
{
	if (number.GetNumber() == 0)
	{
		cout << "Error. Number = 0\n";
	}
	else
		return this->firstNumber / number.GetNumber();
}