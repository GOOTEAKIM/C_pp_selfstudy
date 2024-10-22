// lec 13. 포인터와 메모리 해제 (1)


#include <iostream>

using namespace std;

int main() {

	// 변수 선언 과정

	// C++ : 객체 지향 프로그래밍

	//컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다.

	//- 배열을 만든다
	//재래적 절차적 프로그래밍 : 배열 크기가 미리 결정되어야 한다.
	//객체 지향 프로그래밍 : 배열의 크기가 실행 시간에 결정해도 된다.


	// 포인터 : 사용할 주소에 이름을 붙인다.
	// 즉, 포인터는 포인터의 이름이 주소를 나타낸다.
	// 간접값 연산자, 간접 참조 연산자 '*'

	int *a; // C style

	int* b; // C++ style

	int* c, d; // c는 포인터 변수, d는 int 형 변수

	int A = 6;
	int* B;
	B = &A;

	cout << "A의 값" << A << endl;
	cout << "*B의 값" << *B << endl;

	cout << "A의 주소" << &A << endl;
	cout << "*B의 주소" << B << endl;

	*B += 1;

	cout << "이제 A의 값은 " << A << endl;

	return 0;
}
