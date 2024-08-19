#include <iostream>
using namespace std;

void printTotalNumberAndTheMaximumNumberOfChips(int a[], int n) {
    int max = 0, sum = 0;
    for(int i = 0; i < n; i++) {
        if(max < a[i]) max = a[i];
        sum += a[i];
    }
    cout << sum << " " << max;
}

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    printTotalNumberAndTheMaximumNumberOfChips(a, n);
}