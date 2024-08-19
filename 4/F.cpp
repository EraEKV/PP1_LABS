#include <iostream>  
using namespace std;

int main() {
    long long n, mx = -1000000000, p1 = 0, p2 = 0;
    cin >> n;
    long long a[n][n];
    for(long long i = 0; i < n; i++) {
        for(long long j = 0; j < n; j++) {
            cin >> a[i][j];
            if(a[i][j] > mx) {
                mx = a[i][j];
                p1 = i + 1;
                p2 = j + 1;
            }
        }
    }
    cout << p1 << " " << p2;
    return 0;
}