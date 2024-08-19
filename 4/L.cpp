#include <iostream>  
using namespace std;

int main() {
    int r, c, s = 0, mn = 100000, x = 0, y = 0;
    cin >> r >> c;
    long long a[r][c];
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    cout << "coordinates of min elements:" << endl;
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            if(a[j][i] < mn) {
                mn = a[j][i];
                x = j;
                y = i;
            }
        }
        mn = 100000;
        s += a[x][y];
        cout << x + 1 << ";" << y + 1 << endl;
    }
    cout << endl << "Their sum:" << endl << s;
    return 0;
}