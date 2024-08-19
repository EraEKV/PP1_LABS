#include <iostream>
using namespace std;

int recursion(int m, int n) {
    if(m <= n) {
        cout << m << " ";
        recursion(m + 1, n);
    }
    return 0;
}

int main() {    
    int n; cin >> n;
    recursion(1, n);
}
