#include <iostream>
using namespace std;

int heater(string& s, int i) {
    if(i == s.size() - 1) return (s[i] - '0') / 2;
    return (s[i] - '0') / 2 + heater(s, i + 1);
}

int main() {
    string s; cin >> s;
    cout << heater(s, 0);
    return 0;
}
