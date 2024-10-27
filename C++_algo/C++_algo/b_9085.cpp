#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>

using namespace std;

int sumArr(int n, int* arr);

int main() {

	freopen("input.txt", "r", stdin);

	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;

		int* arr = new int[n];

		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int sum = sumArr(n, arr);

		cout << sum << endl;

	}

	return 0;
}

int sumArr(int n, int* arr) {
	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total;
}