#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length(), f = 1;
    string l = "abcdefghijklmnopqrstuvwxyz", c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 27; j++) {
            if(s[i] == l[j]) {
                cout << c[j];
                f = 0;
            } 
        }
        if(f) {
            cout << s[i];
        }
        f = 1;
    }
    return 0;
}