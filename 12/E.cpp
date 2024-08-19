#include <iostream>
using namespace std;

void dexToHex(int n) {
    string t, s = "0123456789ABCDEF";
    while(n > 0) {
        t += s[n % 16]; 
        n /= 16; 
    }
    for(int i = t.size() - 1; i >= 0; i--) cout << t[i];
}

int main() {
    int n; cin >> n;
    dexToHex(n);
    return 0;
}