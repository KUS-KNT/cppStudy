/*1부터 10까지 짝수만 출력하시오.
* 단, 짝수인지 아닌지 판단하는 isOdd(int n) 인라인 함수를 만들어 구현하시오.
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


/*결과
* 2 4 6 8 10
*/