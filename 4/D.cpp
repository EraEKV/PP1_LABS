#include <iostream>
using namespace std;

int main() {
    int n, m = -100000, m1 = -100000;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = j;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 1; j++) {
            a[i][j] = i; 
        }
    }
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < n; j++) {
            a[i][j] = a[0][j] * a[i][0];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}