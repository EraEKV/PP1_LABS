#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n]; cin >> a[0];
    int max = a[0], min = a[0];
    for(int i = 1; i < n; i++) {
        cin >> a[i];
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    for(int i = 0; i < n; i++) if(a[i] == max) cout << min << " "; else cout << a[i] << " ";
    return 0;
}