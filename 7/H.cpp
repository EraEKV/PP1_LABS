#include <iostream>
using namespace std;

void fibonacci(int l, int p, int n, int i) {
    if(i == n - 1) {
        cout << l;
        return;
    }
    fibonacci(p, l + p, n, i + 1);
}

int main() {    
    int n; cin >> n;
    fibonacci(0, 1, n, 0);
    return 0;
}
