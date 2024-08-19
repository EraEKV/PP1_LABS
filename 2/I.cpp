#include <iostream> 
using namespace std;

int main() {
    int n, m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 10 == 7) {
            m++;
        }
    }

    cout << m;
    return 0;
}