// 인라인 함수와 디폴트 매개변수

#include <iostream>
//인라인 함수
inline float square(float x) { return x * x; }

using namespace std;

const int SIZE = 8;
int sumArr(int*, int);

int main() {

	int a = 5;

	cout << "한 변의 길이가 " << a << "인 정사각형이 넓이는?" << endl;

	float b = square(a);

	cout << b << endl;

	// 디폴트 매개변수

	int arr[SIZE] = { 1,2,4,8,16,32,64 };
	int sum = sumArr(arr, SIZE);

	cout << "함수의 총 합은 " << sum << " 입니다.";

	return 0;
}


// 인라인 함수
/*

일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입
컴파일러의 인라인 함수 호출 = 점프가 아닌 그에 대응하는 함수 코드로 대체

*/

int sumArr(int* arr, int n) {

	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total;
	
}
