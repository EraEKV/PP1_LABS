#include <iostream>
using namespace std;

int reverse(int a[], int b[], int n) {
    for(int i = 0; i < n; i++) {
        b[i] = a[n - i - 1];
    }
    return 0;
}

int main() {
    int n; cin >> n; 
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    reverse(a, b, n);
    for(auto i : b) {
        cout << i << " ";
    }
    return 0;
}