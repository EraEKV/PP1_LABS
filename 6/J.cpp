#include <iostream>
using namespace std;

int maximus(int n, int m) {
    if(n > m) return n; else return m;
}

int main() {
    int m = -100000, n;
    while(cin >> n) {
        m = maximus(n, m);
        if(cin.get() == '\n') {
            cout << m;
            return 0;
        }
    }
    return 0;
}