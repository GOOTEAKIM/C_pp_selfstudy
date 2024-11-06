// �ζ��� �Լ��� ����Ʈ �Ű�����

#include <iostream>
//�ζ��� �Լ�
inline float square(float x) { return x * x; }

using namespace std;

const int SIZE = 8;
int sumArr(int*, int);

int main() {

	int a = 5;

	cout << "�� ���� ���̰� " << a << "�� ���簢���� ���̴�?" << endl;

	float b = square(a);

	cout << b << endl;

	// ����Ʈ �Ű�����

	int arr[SIZE] = { 1,2,4,8,16,32,64 };
	int sum = sumArr(arr, SIZE);

	cout << "�Լ��� �� ���� " << sum << " �Դϴ�.";

	return 0;
}


// �ζ��� �Լ�
/*

�Ϲ������� �Լ��� ȣ���� �Լ��� �ּҷ� �����ϴ� ����
�ζ��� �Լ��� �����ϵ� �Լ� �ڵ尡 ���α׷��� �ٸ� �ڵ忡 ����
�����Ϸ��� �ζ��� �Լ� ȣ�� = ������ �ƴ� �׿� �����ϴ� �Լ� �ڵ�� ��ü

*/

int sumArr(int* arr, int n) {

	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total;
	
}