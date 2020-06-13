/*
2. Переробити виконане завдання 1 на багатофайловий проект
	Int.h - містить визначення класу
	Int.cpp - містить реалізації функцій-елементів додавання, множення та інш.
	main.cpp - містить головну функцію main()
*/
#include <iostream>
#include "Int.h"

using namespace std;

int main()
{
	Int a = 10;
	Int b = 3;
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