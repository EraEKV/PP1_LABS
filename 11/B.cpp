#include <iostream>
#include <set>
using namespace std;

string checkUniqueness(multiset <int>& s);
int main() {
    int n, num; cin >> n;
    multiset <int> s;
    for(int i = 0; i < n; i++) {
        cin >> num;
        s.insert(num);
    }
    cout << checkUniqueness(s);
    return 0;
}


string checkUniqueness(multiset <int>& s) {
    int last;
    while(!s.empty()) {
        last = *s.begin();
        s.erase(s.begin());
        if(last == *s.begin()) return "NO";
    }
    return "YES";
}
