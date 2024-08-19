#include <iostream>
#include <map>
using namespace std;

int main() {
    map <string, long long> m;
    long long n, sum = 0; cin >> n;
    string val;
    for(int i = 0; i < n; i++) {
        cin >> val;
        if(!m[val]) m[val] = 1;
        else m[val] += 1;
    }
    for(auto el : m) {
        if(el.second == 3) sum++;
    }
    cout << sum;
    return 0;
}