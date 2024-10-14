/*1���� 10���� ¦���� ����Ͻÿ�.
 * ��, ¦������ �ƴ��� �Ǵ��ϴ� isOdd(int n) �ζ��� �Լ��� ����� �����Ͻÿ�.
 */
#include <iostream>
using namespace std;

inline bool isOdd(int n)
{
    if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (!isOdd(i + 1))
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

/*���
 * 2 4 6 8 10
 */