#include <iostream>  
using namespace std;

int main() {
    int n, mx = -100000;
    cin >> n;
    n = n * n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        if(a[i] > mx) {
            mx = a[i];
        }
    }
    cout << mx;
    return 0;
}