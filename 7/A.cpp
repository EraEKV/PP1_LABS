#include <iostream>
using namespace std;

long long degree(int base, int n) {
    if(n == 0) return 1;
    return base * degree(2, n - 1);
}

int main() {
    int n; cin >> n;
    cout << degree(2, n);
    return 0;
}