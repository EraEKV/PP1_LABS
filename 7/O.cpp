#include <iostream>
using namespace std;

void kInary(int n, int k, string& kinary) {
    if(n > k - 1) kInary(n / k, k, kinary);
    cout << kinary[n % k];
}

int main() {
    string kinary = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int n, k;
    cin >> n >> k;
    kInary(n, k, kinary);
    return 0;
}