// if문, if else 문

#include <iostream>

using namespace std;

int main() {

	// 분기 구문

	// if 문
	
	/*
	if (조건)
		코드
	*/

	if (false) {
		cout << "#1" ;

	}

	else
	{
		if (true) {
			cout << "#2";
		}
		else
		{
			cout << "#1";
		}
	}

	cout << " " << endl;

	if (false)
		cout << "조건이 거짓입니다." << endl;

	cout << "프로그램이 종료되었습니다." << endl;

	return 0;
}