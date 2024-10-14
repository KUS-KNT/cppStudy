/*
 * rectangle Ŭ���� �����
 * main �Լ��� �� �۵��ϵ��� rectangle Ŭ������ �ۼ��ϰ� ���α׷��� �ϼ��϶�.
 * width�� height�� �� ��������� 3���� ������, isSquare()�Լ��� ������.
 */
#include <iostream>
using namespace std;

class Rectangle
{
	int width, height;

public:
	Rectangle()
	{
		width = 1;
		height = 1;
	};
	Rectangle(int width)
	{
		this->width = width;
		height = 1;
	}
	Rectangle(int width, int height)
	{
		this->width = width;
		this->height = height;
	}
	bool isSquare()
	{
		if (width == height)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare())
		cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare())
		cout << "rect2은 정사각형이다." << endl;
	if (rect3.isSquare())
		cout << "rect3은 정사각형이다." << endl;
}

/*���
 * rect1�� ���簢���̴�.
 * rect3�� ���簢���̴�.
 */