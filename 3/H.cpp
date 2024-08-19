#include <iostream>
using namespace std;

int main() {
    long long n, l, r, s = 0;
    cin >> n >> l >> r;
    long long a[n];
    for(long long i = 0; i < n; i++) {
        cin >> a[i];  
        long long k = i + 1;
        if(k >= l && k <= r) {
            s += a[i];
        }
    }
    cout << s;
    return 0;
}

