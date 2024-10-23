// lec 9 . 배열과 문자열

#include <iostream>
using namespace std;
int main() {
	/*
	배열 (array) : 같은 데이터형의 집합
	typeName arrayName[arraySize];
	*/

	short month[12] = { 1,2,3 };
	// short 가 12개 들어갈 수 있다


	//cout << month[1] << endl;
	cout << month[2] << endl;

	// 문자열 : 문자의 열.
	char a[] = { 'H', 'e', 'l','l','o' };
	char b[] = "Hello";

	cout << a << endl;
	cout << b << endl;

	return 0;
}