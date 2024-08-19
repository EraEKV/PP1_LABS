#include <iostream>
using namespace std;

string check(string s, int n) {
    int x = 0, l = s[n - 1] - '0';
    for(int i = 0; i < n; i++) {
        x += s[i] - '0';
    }
    if(x % l == 0) return "Yes"; else return "No";
}

int main() {
    string s; cin >> s;
    cout << check(s, s.size());
    return 0;
}