/*1���� 10���� ¦���� ����Ͻÿ�.
* ��, ¦������ �ƴ��� �Ǵ��ϴ� isOdd(int n) �ζ��� �Լ��� ����� �����Ͻÿ�.
*/
#include <iostream>
using namespace std;

inline void isOdd(int n)
{
	if (n % 2 == 0)
	{
		cout << n << " ";
	}
}
int main()
{
	int num[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	for (int i = 0; i < 10; i++)
	{
		isOdd(num[i]);
	}
}


/*���
* 2 4 6 8 10
*/