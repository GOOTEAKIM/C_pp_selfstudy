#include <iostream>

using namespace std;

int main() {

	// char : 작은 문자형

	char b = 'a';
	char c[] = {'a', 'b', 'c', '\0'};
	// null 문자 : '\0'
	// "" >> 명시적으로 null 문자가 포함

	cout << b << endl;
	cout << c << endl;

	// bool : 0 혹은 1만 나타내는 형태

	bool d = 0;
	bool e = 1;
	bool f = 10;

	cout << d << " " << e << " " << f << endl;

	return 0;
}