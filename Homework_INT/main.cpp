/*
1. Створити клас Int, що імітує роботу стандартного типу int.
Наприклад, нехай код основної програми (в функції main()) для вбудованого типу int має наступний вигляд:
//при використанні змінних стандартного типу int
	int a = 8, b = 3, res = 0;
	res = a + b;
	res = a / b;
	cоut << res << еndl;
//при використанні об’єктів типу Int, аналогічний код буде мати вигляд
	Int a(8), b(3), res; // res: [0]
	res = a.sum(b); // res : [11]
	cоut << res.getValue() << еndl; // 11
	res = a.div(b); // res : [2]
	cоut << res.getValue() << еndl; // 2



Єдине поле даного класу повинно мати тип int.
Створити
	Конструктори( за замовчуванням та з одним параметром)
	Методи доступу до  поля класу
	Метод виведення значення на екран
	Метод додавання до даного екземпляру класу Int іншого екземпляру класу Int(наприклад сумування може виконувати метод з прототипом Int Sum(const Int& num))
	Метод віднімання від даного екземпляру класу Int іншого екземпляру класу Int
	Метод множення  даного екземпляру класу Int  на інший екземпляр класу Int
	Метод діленння  даного екземпляру класу Int  на інший екземпляр класу Int(врахувати, що ділення на 0 неможливе)



Напишіть програму, в якій будуть створені три об’єкта класу Int, два з яких будуть ініціалізовані. Додайте два ініціалізованих об’єкта, присвойте результат третьому,
а потім відобразіть результат на екран.
ПРИМІТКА! На 12 балів реалізувати також методи, які виконують дії аналогічні операціям *=, +=, -=, /=

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