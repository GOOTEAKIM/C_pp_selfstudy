// switch 문과 break continue 문

#include <iostream>
using namespace std;

const int SIZE = 30;

int main() {

	//cout << "숫자를 입력하세요" << endl;

	//int a;

	//cin >> a;

	//switch (a)
	//{
	//case 1:
	//	cout << "입력하신 값은 1입니다 \n";
	//	break;

	//case 2:
	//	cout << "입력하신 값은 2입니다 \n";
	//	break;	
	//
	//case 3:
	//	cout << "입력하신 값은 3입니다 \n";
	//	break;

	//// 해당 케이스에 없다면 default 값을 반환
	//default:
	//	cout << "입력하신 값은 1,2,3 이외의 다른 값입니다." << endl;
	//}

	//cout << "switch 구문이 끝났습니다 \n";

	//// break : 모든 종류의 루프에서 사용 가능

	//int i = 0;

	//while (true) {

	//	cout << "i의 값은 " << i << " 입니다." << endl;

	//	if (i > 10)
	//		break;
	//	i++;
	//}

	//cout << "while 문이 끝났습니다. \n";

	cout << "문장을 입력하세요 \n";
	char line[SIZE];
	cin.get(line, SIZE);
	cout << "입력하신 문장은 \n";

	int spaces = 0;
	for (int i = 0; line[i] != '\0'; i++) {
		cout << line[i];

		if (line[i] != ' ')
			continue;
		spaces++;
	}

	cout << "입니다 \n";
	cout << "입력하신 문장에서 공백을 제외한 문자 수는 " << spaces << "개 입니다 \n";
	cout << "for 문이 끝났습니다.";

	return 0;
}