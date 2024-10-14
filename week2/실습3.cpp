/*155p �ǽ����� 10�� Ǯ��*/

#include <iostream>
using namespace std;

class Add
{
    int a, b;

public:
    void setValue(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int calculate()
    {
        return a + b;
    }
};

class Sub
{
    int a, b;

public:
    void setValue(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int calculate()
    {
        return a - b;
    }
};

class Mul
{
    int a, b;

public:
    void setValue(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int calculate()
    {
        return a * b;
    }
};

class Div
{
    int a, b;

public:
    void setValue(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int calculate()
    {
        return a / b;
    }
};

int main()
{
    Add a;
    Sub s;
    Mul m;
    Div d;

    while (true)
    {
        int num1, num2;
        char c;

        cout << "두 정수와 연산자를 입력하세요 >> ";
        cin >> num1 >> num2 >> c;

        if (c == '+')
        {
            a.setValue(num1, num2);
            cout << a.calculate() << endl;
        }
        else if (c == '-')
        {
            s.setValue(num1, num2);
            cout << s.calculate() << endl;
        }
        else if (c == '*')
        {
            m.setValue(num1, num2);
            cout << m.calculate() << endl;
        }
        else if (c == '/')
        {
            if (num2 != 0)
            {
                d.setValue(num1, num2);
                cout << d.calculate() << endl;
            }
            else
            {
                cout << "0으로는 나눌 수 없습니다" << endl;
            }
        }
    }
}