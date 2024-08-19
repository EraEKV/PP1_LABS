#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0, j;
    string s, t;
    cin >> s >> t;
    for(int i = 0; i < s.length(); i++) {
        j = x;
        while(j < t.length()) {
            if(s[i] == t[j]) {
                x++;
                break;
            } else {
                x = 0;
                break;
            }
        }
        if(x == t.length()) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}