// lec 11. 구조체

#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// 구조체 : 다른 데이터형이 허용되는 데이터의 집합

	// 배열 : 같은 데이터형의 집합

	// 축구선수
	struct MyStruct
	{
		string name;
		string position;
		int height;
		int weight;
	} B;

	// 구성 요소가 잡힘

	MyStruct A = {
		"gootea",
		"FW",
		172,
		78
	};

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;

	B = {

	};

	cout << B.height << endl;

	MyStruct C[2] = {
		{"A", "A", 10, 1},
		{"B", "B", 20, 2}
	};

	cout << C[0].height << endl;
	cout << C[1].weight << endl;

	return 0;
}