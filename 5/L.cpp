#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, l = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    int j = 0, n = s.size();
    for(int i = 0; i < 26; i++) {
        if(j + 1 <= n) {
            if(s[j + 1] == s[j] && s[j] == l[i]) {
                j++;
                i--;
            } else if(s[j] == l[i]) {
                j++;
            } else {
                cout << "NO";
                return 0;
            }
        } else {
            break;
        }
    }
    cout << "YES";
    return 0;
}