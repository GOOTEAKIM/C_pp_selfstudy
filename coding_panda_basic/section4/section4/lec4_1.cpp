// 반복문 : 반복문의 정의와 for문의 형태
#include <iostream>

using namespace std;

int main() {

	// 반복문이란?

	char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	for (int i = 0; i < 5; i++) {
		cout << a[i] << endl;
	}

	/*
	1. 반복문에 사용할 카운터의 값을 초기화 (i)
	2. 반복문을 진행할 것인지 '조건 검사'
	3. 반복문 몸체를 수행한다. (={ } 안의 부분)
	4. 카운터의 값을 변화한다. (i++)
	
	*/

	return 0;
}