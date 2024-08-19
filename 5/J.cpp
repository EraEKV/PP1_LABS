#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, r1, r2, t = "", l = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    int i = 0;
    for(int i = s.length() - 1; i >= 0; i--) {
        t += s[i];
    }
    while(i < 4) {
        r1 = s + l[i];
        r2 = l[i] + t;
        if(r1 == r2) {
            cout << "YES";
            return 0;
        }
        i++;
    }
    cout << "NO";
    return 0;
}