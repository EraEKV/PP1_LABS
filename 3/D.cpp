#include <iostream>
using namespace std;

int main() {
    int n, m = -100000000, p;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > m) {
            m = a[i];
            p = i + 1;
        } 
    }

    cout << p;

    return 0;
}