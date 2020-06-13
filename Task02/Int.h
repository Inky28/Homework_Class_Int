#pragma once
#include <iostream>
using namespace std;

class Int
{
private:
	int firstNumber;
public:
	Int();

	Int(int number);

	void Show();

	void SetNumber(const int& number);

	int GetNumber();

	Int GetSum(Int& number);

	Int GetSub(Int& number);

	Int GetMul(Int& number);

	Int GetDiv(Int& number);
};
