#include <iostream>
using namespace std;

int function(int n) {
    int v, s = 0, a[101] = {}, b[101] = {};
    for(int i = 0; i < n; i++) {
        cin >> v;
        a[v]++;
    }
    for(int i = 0; i < n; i++) {
        cin >> v;
        b[v]++;
    }
    for(int i = 1; i < 101; i++) if(a[i] != 0 && b[i] != 0) a[i] > b[i] ? s += b[i] : s += a[i];
    return s;
}

int main() {
    int n; cin >> n;
    cout << function(n);
    return 0;
}