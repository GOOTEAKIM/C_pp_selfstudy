#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int a;

    cin >> a;

    for (int i = a; i > 0; i--) {
        cout << string(i, '*') << endl;
    }

    return 0;
}