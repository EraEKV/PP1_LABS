#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] != a[i - 1]) {
            cout << a[i] << " ";
        }
    }
    return 0;
}