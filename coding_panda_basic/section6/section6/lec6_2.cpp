// 매개변수와 전달인자

#include <iostream>

using namespace std;

void hellCPP(int, int);

int main() {

	int times, times2;

	cout << "정수를 입력하세요 \n";
	cin >> times;

	cout << "정수를 한번 더 입력하세요 \n";
	cin >> times2;

	hellCPP(times, times2);

	return 0;
}

void hellCPP(int n, int m) {
	for (int i = 0; i < n; i++)
		cout << "Hello \n";

	for (int i = 0; i < m; i++)
		cout << "C++ \n";
	
}

/*

함수는 1개 이상의 파라미터를 쓸 수 있다.

*/