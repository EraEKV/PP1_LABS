#include <iostream>
using namespace std;

int main() {
    long long n, s = 0;
    cin >> n;
    long long a[n];
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }

    cout << s;

    return 0;
}
