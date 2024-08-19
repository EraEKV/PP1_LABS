#include <iostream>  
using namespace std;

int main() {
    int r, c, s = 0;
    cin >> r >> c;
    long long a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            s += a[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << s << endl;
        s = 0;
    }
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            s += a[j][i];
        }
        cout << "The sum of column number " << i + 1 << " is " << s << endl;
        s = 0;
    }
    return 0;
}