// lec 15 포인터 연산

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#define SIZE 20
using namespace std;


int main() {

	char animal[SIZE];
	char* ps;

	cout << "동물 이름을 입력하십시오 \n";
	cin >> animal;
	// 입력 받은 것을 animal에 저장

	ps = new char[strlen(animal) + 1];
	// strlen : 변수의 크기를 반환

	strcpy(ps, animal);
	// strcpy : animal 값을 ps에 복사

	cout << "입력하신 동물 이름을 복사하였습니다" << endl;
	cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << "입니다." << endl;
	cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << "입니다." << endl;

	delete[] ps;

	return 0;
}