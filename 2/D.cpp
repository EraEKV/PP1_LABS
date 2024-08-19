#include <iostream>
using namespace std;

int main() {
    int a, b, j;
    cin >> a >> b;
    j = 1;
    if (b >= a * 2) {
        cout << 2;
    } else if (a % b == 1) {
        cout << ((a - 1) / b) * 2 + 1;
    } else if (a >= b + 1) {
        do {
            j++;
            a -= b;
        } while (a - b > 0);
        cout << j * 2;
    }

    return 0;
}