#include <iostream>
#include <vector>
using namespace std;

int isPrime(int n);

int main() {
    int n, k, x, c = 0; cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    cin >> k;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] >= k) {
            c += isPrime(v[i]);
        }
    }
    cout << c;
    return 0;
}

int isPrime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {    
            return 0;
        }
    }
    return 1;
}