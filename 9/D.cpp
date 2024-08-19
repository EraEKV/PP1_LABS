#include <iostream>
#include <map>
using namespace std;

int main() {
    map <long long, long long> m;
    long long n, k, val; cin >> n >> k;
    for(int i = 0; i < n; i++) {
        cin >> val;
        if(!m[val]) m[val] = 1;
        else m[val] += 1;
    }
    cout << m[k];
    return 0;
}