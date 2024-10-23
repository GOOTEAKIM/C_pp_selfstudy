// 반복문 : 증가/감소 연산자와 관계 표현식

#include <iostream>

using namespace std;

int main() {

	for (int i = 0; i < 5; i++) {
		cout << i << endl;
	}
	


	// 증가 연산자, 감소 연산자

	int a = 10;
	int b = 10;

	cout << "a는 " << a << ", b는 " << b << endl;
	cout << "a++는 " << a++ << endl;
	cout << "a++는 " << a << endl;
	cout << "b는 " << b << endl;
	cout << "++b는 " << ++b << endl;


	return 0;
}