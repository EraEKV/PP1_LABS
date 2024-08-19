#include <iostream>
using namespace std;

int main() {
    int n, x, m = 1; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    x = a[0] ^ a[1];
    for(int i = 2; i < n; i++) x ^= a[i];
    while(m <= x) {
        if(m == x) {
            cout << "YES"; 
            return 0;
        }
        m *= 2;
    }
    cout << "NO";
}