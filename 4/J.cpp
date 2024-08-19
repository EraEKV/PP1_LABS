#include <iostream>  
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    long long a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
            if((i + j) % 2 == 0) {
                a[i][j] = a[i][j] + 1;
            } else {
                a[i][j] = a[i][j] - 1;
            }
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}