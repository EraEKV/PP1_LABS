#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, l = "abcdefghijklmnopqrstuvwxyz";
    cin >> s;
    int i = 0;
    for(int i = 0; i < s.size(); i++) {
        for(int j = 0; j < 26; j++) {
            if(s[i] == l[25]) {
                cout << "a";
                break;
            } else if(s[i] == l[j]) {
                cout << l[j + 1];
            }
        }
    }
    return 0;
}
