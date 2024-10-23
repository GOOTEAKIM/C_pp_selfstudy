// 반복문의 활용

#include <iostream>

using namespace std;

int main() {

	// 배열 기반 반복문
	int arr[5] = { 1,3,5,7,9 };

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;

	}

	cout << "\n";

	// for 문의 조건에 배열을 넣어준다.
	for (int i : arr) {
		cout << i << endl;
	}

	// 중첩 루프 : 2차원 배열

	int temp[4][5] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15},
		{16,17,18,19,20},
	};


	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << temp[row][col] << " ";
		}
		cout << "\n";
	}

	

	return 0;
}