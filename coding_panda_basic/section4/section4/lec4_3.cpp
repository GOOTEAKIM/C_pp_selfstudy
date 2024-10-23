// while 루프와 do while 루프

#include <iostream>

using namespace std;

int main() {

	// while문, do while 문

	int i = 0;

	while (i < 3) {
		cout << i << endl;
		i++;
	}
	
	cout << " " << endl;

	string animal = "Panda";

	int j = 0;

	while (animal[j] != '\0') {

		cout << animal[j] << endl;
		j++;
	}

	// while 문
	int k = 0;

	while (k < 3) {
		cout << "while 문 입니다. \n";
		k++;
	}

	// do, while 문
	
	int f = 0;

	do {
		cout << "do, while 문입니다. \n";
		f++;
	} while (f < 3);

	return 0;
}