#include <iostream>

using namespace std;

int main() {

	// + - * / %

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

	int multiple = a / b * c;

	cout << multiple << endl;

	// auto 자동으로 형을 정해준다.

	auto n = 100;
	auto x = 1.5;
	auto y = 1.3e12L;



	return 0;
}