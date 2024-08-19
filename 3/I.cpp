#include <iostream>
using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int i = 0, j = r - 1;
    while(i < n) {
        if(i + 1 >= l && i + 1 <= r) {
            cout << a[j] << " ";
            j--;
        } else {
            cout << a[i] << " ";
        }
        i++;
    }
    return 0;
}
