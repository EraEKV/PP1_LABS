#include <iostream>
using namespace std;

int XOR(long long* a, int n);

int main() {
    int n; cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << XOR(a, n);
    return 0;
}

int XOR(long long* a, int n) {
    int c = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int x = a[i] ^ a[j];
            for(int k = 0; k < n; k++) {
                if(x == a[k]) {
                    c++;
                    break;
                }
            }
        }
    }
    return c;
}