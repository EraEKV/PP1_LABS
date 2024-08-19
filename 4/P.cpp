#include <iostream>
using namespace std;

int main() {    
    int n, s = 0, k = -1;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i <= n; i++) {
        s += a[i][k];
        k--;
    }
    cout << s;
    return 0;
}