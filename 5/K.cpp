#include <iostream>
#include <string>
using namespace std;

int main() {
    int x = 0;
    string s, r;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        r = s[i];
        if(r == "a" || r == "e" || r == "i" || r == "u" || r == "o") {
            x++;
        }
    }
    cout << x;
    return 0;
}