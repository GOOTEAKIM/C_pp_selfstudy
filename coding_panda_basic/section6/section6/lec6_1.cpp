// 함수의 기초

#include <iostream>

using namespace std;

const float PIE = 3.14;
void cheers(int n);
float circle(int x);

int main() {

	int a;
	cout << "하나의 수를 입력하세요" << endl;
	cin >> a;
	cheers(a);


	int b;
	cout << "원의 반지름 길이를 입력하세요." << endl;
	cin >> b;
	float c = circle(b);
	cout << "원의 넓이는 " << c << " 입니다." << endl;

}

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		cout << "Cheers!" << endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

// 함수란?

// 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합

// C++ 에서 함수가 갖추어야 하는 조건

/*
1. 함수 정의 제공
2. 함수 원형 제공
3. 함수 호출
*/

// 함수의 종류

/*
1. 리턴 값이 있는 함수

typeName funcionName(parameterList)
{
	statement(s);
	return value;
}

2. 리턴 값이 없는 함수

void funcionName(parameterList)
{
	statement(s);
	return; // 생략될 수 있음
}
*/

// void가 있다? return 값 없음
// void가 없다? return 값 있음

// C++ 에서는 배열을 제외한 모든 것을 리턴할 수 있다.

