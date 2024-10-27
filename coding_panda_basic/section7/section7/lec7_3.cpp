// 함수 오버로딩

#include <iostream>

using namespace std;

int sum(int, int);
float sum(float, float);

int main() {

	cout << "두 정수를 입력하세요 \n";

	int a, b;
	cin >> a >> b;

	cout << "두 정수의 합은 " << sum(a, b) << "입니다 \n";
	cout << "두 실수를 입력하세요 \n";
	float c, d;
	cin >> c >> d;
	cout << " 두 실수의 합은 " << sum(c, d) << " 입니다 \n";

	return 0;
}

/*

함수의 오버로딩

여러 개의 함수를 같은 이름으로 연결한다.

*/

int sum	(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}
