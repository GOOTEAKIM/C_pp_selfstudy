// 재귀함수와 함수를 지시하는 포인터

#include <iostream>
using namespace std;

void countDown(int);
int func(int);

int main() {

	// 재귀호출 : 자기 자신을 호출

	countDown(5);

	int (*pf)(int);

	pf = func;
	// pf 는 함수 이름

	cout << (*pf)(3) << endl;

	return 0;
}

void countDown(int n) {

	cout << "Counting..." << n << endl;

	if (n > 0)
		countDown(n - 1);
	cout << n << "번째 재귀함수" << endl;
}

int func(int n) {

	return n+1;
}

/*
함수를 지시하는 포인터
어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.

1. 함수의 주소를 얻는다.
2. 함수를 지시하는 포인터를 선언한다.
3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.

*/
