#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset <int> s1;
    multiset <int> s2;
    int n, num; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        if(num % 2 == 0) s1.insert(num);
        else s2.insert(num);
    } 
    multiset <int> :: reverse_iterator rit;
    for(rit = s1.rbegin(); rit != s1.rend(); rit++) {
        cout << *rit << " ";
    }
    for(auto el : s2) {
        cout << el << " ";
    }
    return 0;
}
