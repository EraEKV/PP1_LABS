#include <iostream>
using namespace std;

int main() {
    int n, m = -100000, m1 = -100000;
    cin >> n;
    long long a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            if(a[i][j] > m) {
                m = a[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] > m1 && a[i][j] != m) {
                m1 = a[i][j];
            }
        }
    }
    if(m1 == -100000) {cout << 0;} else {cout << m1;}
    return 0;
}