#include <iostream>
using namespace std;

string isCheater(int n, int k);

int main() {
    int n, k;
    cin >> n >> k;
    cout << isCheater(n, k);
    return 0;
}


string isCheater(int n, int k) {
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0; i < n - 1; i++) {
        if(a[i + 1] - a[i] <= k) return "cheater";
    }
    return "no";
}