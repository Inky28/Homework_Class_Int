/*
3. Створити масив фіксованого розміру з обєктів типу Int, проініціалізувати обєкти масиву.
	Знайти суму елементів масиву як Int
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
	const int SIZE = 7;
	Int arr[SIZE];//{ 1,3,4,5,6,7,8 };

	for (size_t i = 0; i < SIZE; i++)
	{
		int tempNumber;
		cout << "Number for array, index [" << i << "]: ";
		cin >> tempNumber;
		arr[i].SetNumber(tempNumber);
	}

	for (size_t i = 0; i < SIZE; i++)
		arr[i].Show();

	Int res = 0;
	for (size_t i = 0; i < SIZE; i++)
		res = res.GetSum(arr[i]);

	cout << "Result = ";
	res.Show();

}