#include <iostream>
using namespace std;

string check(string s) {
    string t = "";
    int i = 0;
    while(i < s.size()) {
        if((i % 2 == 0) && (s[i] >= 97 && s[i] <= 122)) {
            t += s[i] - 32;
        } else {
            t += s[i];
        }
        i++;
    }
    return t;
}

int main() {
    string s; cin >> s;
    cout << check(s);
    int i = 1;
    return 0;
}