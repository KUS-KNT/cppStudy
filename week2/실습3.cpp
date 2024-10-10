/*155p �ǽ����� 10�� Ǯ��*/
#include <iostream>
using namespace std;

class Add
{
	int a;
	int b;
public:
	Add() : a(0), b(0) {};
	void setValue(int x, int y)
	{
		a = x;
		b = y;
	}
	int calculate()
	{
		return a + b;
	}
};
class Sub
{
	int a;
	int b;
public:
	Sub(): a(0), b(0) {};
	void setValue(int x, int y)
	{
		a = x;
		b = y;
	}
	int calculate()
	{
		return a - b;
	}
};
class Mul
{
	int a;
	int b;
public:
	Mul() : a(0), b(0) {};
	void setValue(int x, int y)
	{
		a = x;
		b = y;
	}
	int calculate()
	{
		return a * b;
	}
};
class Div
{
	int a;
	int b;
public:
	Div() : a(0), b(0) {};
	void setValue(int x, int y)
	{
		a = x;
		b = y;
	}
	int calculate()
	{
		return a / b;
	}
};

int main()
{
	Add add;
	Sub sub;
	Mul mul;
	Div div;

	int num1, num2;
	char sign;
	while (1)
	{
		cout << "�� ������ �����ڸ� �Է��ϼ��� >> ";
		cin >> num1 >> num2 >> sign;
		switch (sign)
		{
		case '+' :
			add.setValue(num1, num2);
			break;
		case '-':
			sub.setValue(num1, num2);
			cout << sub.calculate() << endl;
			break;
		case '*':
			mul.setValue(num1, num2);
			cout << mul.calculate() << endl;
			break;
		case '/':
			if (num2 == 0)
			{
				cout << "0���� ���� �� �����ϴ�!" << endl;
				break;
			}
			else
			{
				div.setValue(num1, num2);
				cout << div.calculate() << endl;
			}
			break;
		}
	}
}
