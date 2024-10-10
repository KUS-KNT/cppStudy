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
	Rectangle() : width(0), height(0) {}
	Rectangle(int width, int height)
	{
		this->width = width;
		this->height = height;
	}
	Rectangle(int length)
	{
		width = height = length;
	}
	bool isSquare()
	{
		if (width == height)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	
};

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}

/*���
* rect1�� ���簢���̴�.
* rect3�� ���簢���̴�.
*/