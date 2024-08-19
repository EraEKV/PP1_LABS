#include <iostream>
using namespace std;

void gcd(int a, int b, int & max) {
    if(max > a) return;
    for(int i = b; i >= 2; i--) {
        if(a % i == 0 && b % i == 0) {
            if(max < i) max = i;
            return;
        }
    }
}

int main() {
    int n, max = 0; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) gcd(a[i], a[j], max);
            else if(a[i] < a[j]) gcd(a[i], a[j], max);
            else if(max < a[i] && a[i] == a[j]) max = a[i]; 
        }
    }
    cout << max;
}

