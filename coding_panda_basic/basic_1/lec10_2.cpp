#include <iostream>

using namespace std;

int main() {

	// String

	// c 스타일 : string 객체 초기화
	// cin : string 객체에 입력 가능
	// cout : 출력

	char char1[20];
	char char2[20] = "jaguar";

	string str1;
	string str2 = "panda";

	//char1 = char2; 틀림
	str1 = str2;

	cout << str1[0] << endl;

	return 0;
}