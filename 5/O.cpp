#include <iostream>
using namespace std;

int main() {
    string s, l = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    for(int i = 25; i >= 0; i--) {
        for(int j = 0; j < s.size(); j++) {
            if(s[j] == l[i]) {
                cout << l[i];
                return 0;
            }
        }
    }
    return 0;
}
