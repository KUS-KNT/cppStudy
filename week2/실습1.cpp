/*
* rectangle 클래스 만들기
* main 함수가 잘 작동하도록 rectangle 클래스를 작성하고 프로그램을 완성하라.
* width와 height의 두 멤버변수와 3개의 생성자, isSquare()함수를 가진다.
*/

int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}

/*결과
* rect1은 정사각형이다.
* rect3는 정사각형이다.
*/