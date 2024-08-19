#include <iostream>
#include <set>
#include <map>
using namespace std;

void counter(multiset <long long>& s, map <long long, long long>& m) {
    for(auto el : s) {
        if(!m[el]) m[el] = 1;
        else m[el] += 1;
    }
}

int main() {
    multiset <long long> s1;
    map <long long, long long> m;
    int n; cin >> n;
    long long num, s = 0;
    for(int i = 0; i < n; i++) {
        cin >> num;
        s1.insert(num);
    }
    counter(s1, m);
    for(auto el : m) {
        if(el.second >= 2) s++;
    }
    cout << s;
    return 0;
}
