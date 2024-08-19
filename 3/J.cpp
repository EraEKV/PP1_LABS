#include <iostream>
using namespace std;

int main() {
    long long n, l, p = 0;
    cin >> n >> l;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] == l) {
            cout << i;
            return 0;
        } else if (a[i] <= l) {
            p++;
        }
    }
    cout << p;
    return 0;
}