// lec 8 . 산술연산자와 auto


#include <iostream>

using namespace std;

int main() {

	// + - * / %

	/*
	
	+ : 합
	- : 차이
    * : 곱
	/ : 몫
	% : 나머지

	*/

	int a = 10;
	int b = 3;

	int c = a + b;
	int d = a - b;
	int e = a * b;
	int f = a / b;
	int g = a % b;

	cout << "c : " << c << endl;
	cout << "d : " << d << endl;
	cout << "e : " << e << endl;
	cout << "f : " << f << endl;
	cout << "g : " << g << endl;

	// C++ 가 복잡한 산술 연산을 할 수 있을까? Yes

	//int multiple = a + b * c;
	int multiple = a / b * c;

	// 이러면 나눗셈부터 먼저 하고 곱을 하게 됨
	// 왜냐하면 둘 다 우선 순위가 동일하니까

	cout << multiple << endl;

	// auto

	// 데이터형을 자동으로 만들어줌
	// 복잡한 변수명을 쓸 때 사용함

	auto n = 100;
	auto x = 1.5;
	auto y = 1.3e12L;
	
	cout << n * x * y << endl;

	return 0;

}