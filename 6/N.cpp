#include <iostream>
using namespace std;

void transponse(int x, int y) {
    int a[x][y];
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < y; i++) {
        for(int j = 0; j < x; j++) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {    
    int n, m;
    cin >> n >> m;
    transponse(n, m);
}
