#include <iostream> 
using namespace std;

int main() {
    int n, s = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        while (a[i] / 10 != 0 ) {
            if(a[i] % 10 == 0) {
                s++;
            }
            a[i] /= 10;
        }
    }

    cout << s;
    return 0;
}