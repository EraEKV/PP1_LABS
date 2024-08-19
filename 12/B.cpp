#include <iostream>
using namespace std;

int main() {
    int m, n, l; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cin >> l;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i][j] > l) {
                cout << "Penalty!";
                return 0;
            }
        }
    }
    cout << "No penalty for today.";
    return 0;
}