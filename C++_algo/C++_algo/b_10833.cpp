#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>

using namespace std;

int main() {

	freopen("input.txt", "r", stdin);

	int n;

	cin >> n;
	
	int total = 0;

	for (int i = 0; i < n; i++) {
		int a, b;

		cin >> a >> b;

		if (b < a)
			total += b;
		else
			total += (b % a);
		
	}

	cout << total << endl;

	return 0;
}