#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);

    int a, b;

    while (true) {

        cin >> a >> b;

        if (a == 0 && b == 0) {
            break;
        }

        cout << a + b << endl;

    }

    return 0;
}