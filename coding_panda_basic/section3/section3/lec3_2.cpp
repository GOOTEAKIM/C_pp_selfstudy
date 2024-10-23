// lec 10. 사용자 입력과 string

#include <iostream>
#include <cstring>

using namespace std;

int main() {

	const int Size = 15;

	char name1[Size];
	char name2[Size] = "C++programing";

	cout << "안녕하세요! 저는 " << name2;
	cout << "입니다! 성함이 어떻게 되시나요? \n";

	//cin >> name1;

	// cin :  사용자가 입력한 것을 우측 변수에 저장해준다.
	// white space 는 무시한다.공백이 있으면 끝났다고 생각한다.

	cin.getline(name1, Size);
	//cin.get(name1, Size);
	// cin.getline : 공백있는 것도 출력한다.

	cout << "음, " << name1 << "씨, 당신의 이름은";
	cout << strlen(name1) << "자 입니다만 \n";
	cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다. \n";
	cout << "이름이 " << name1[0] << "자로 시작하는군요. \n";
	name2[3] = '\0';
	cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
	cout << name2 << endl;

	cout << "  " << endl;

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