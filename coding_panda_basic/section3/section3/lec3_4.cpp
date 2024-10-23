// lec 12 . 공용체와 열거체

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// 공용체 (union)
	// 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;

	test.intVal = 3;
	cout << test.intVal << endl;

	test.longVal = 33;
	cout << test.intVal << endl;
	cout << test.longVal << endl;

	test.floatVal = 3.3;
	cout << test.intVal << endl;
	cout << test.longVal << endl;
	cout << test.floatVal << endl;

	// 열거체 (enum)
	// 기호 상수를 만드는 것에 대한 또 다른 방법

	enum spectrum {
		red = 0, orange = 2, yellow = 4, green, blue, violet, indigo, ultraviolet
	};

	// 만약 이렇게 할당해주면 green은 yellow를 4로 할당했으니 +1 해줘서 5가 된다.

	spectrum a = orange;

	cout << a << endl;

	int b;
	b = blue;
	b = blue + 3;

	cout << b << endl;

	return 0;
}