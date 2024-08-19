#include <iostream>
using namespace std;

int main() {
    int c[10] = {}, i = 9;
    string s;
    cin >> s;
    int x = 0;
    // while (i >= 0) {
        
    // }
    for(int i = 0; i < s.size(); i++) {
        c[s[i] - '0'] += 1;
        if(s[i] - '0' != 0) {
            x = c[s[i] - '0'];
        }
    }
    for(auto now : c) {
       if(now != 0 && now != x) {
            cout << "NO";
            return 0;
       }
    }
    cout << "YES";
    return 0;
}