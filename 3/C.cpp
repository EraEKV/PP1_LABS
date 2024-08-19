#include <iostream>
using namespace std;

int main() {
    int n, m = -100000000;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > m) {
            m = a[i];
        } 
    }

    cout << m;

    return 0;
}