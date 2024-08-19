#include <iostream>
using namespace std;

int main() {    
    int n, mx = -100000, x, y;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j && mx < a[i][j]) {
                mx = a[i][j];
                x = i + 1;
                y = j + 1;
            } 
        }
    }
    cout << "Maximum element is: " << mx << " with coordinates: " << x << ";" << y;
    return 0;
}