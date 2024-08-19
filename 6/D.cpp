#include <iostream>
using namespace std;

int search(int a, int b) {
    return a == b;
}

int main() {
    int n, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> x;
    for(int i = 0; i < n; i++) {
        if(search(a[i], x)) {
            cout << "YES";
            return 0;
        } 
    }
    cout << "NO";
    return 0;
}