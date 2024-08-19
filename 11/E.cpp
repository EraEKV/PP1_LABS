#include <iostream>
#include <map>
using namespace std;

void check(map <char, int>& m, string& s, int n);

int main() {
    map <char, int> m;
    int n, c = 0; cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        check(m, s, i + 1);
    }   
    for(auto el : m) {
        if(el.second == n) {
            cout << el.first << " ";
            c++;
        }
    }
    if(c == 0) cout << "NO COMMON CHARACTERS";
    return 0;
}


void check(map <char, int>& m, string& s, int n) {
    for(char c : s) {
        if(!m[c]) m[c] = 1;
        else if(m[c] == n - 1) m[c] = n;
    }
}