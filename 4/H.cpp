#include <iostream>  
using namespace std;

int main() {
    int r, c, s = 101, s1 = 0, p = 0;
    cin >> r >> c;
    int a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
            s1 += a[i][j];
        }
        if(s1 < s) {
            s = s1;
            p = i + 1;
        }
        s1 = 0;
    }
    cout << p;
    return 0;
}