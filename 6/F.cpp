#include <iostream>
using namespace std;

string check(string s, int n) {
    int i = 0, c = 0;
    while(i < s.size()) {
        if(s[i] - '0' >= 0 && s[i] - '0' <= 9) {
            c++;
        }
        i++;
    }
    if(c >= n) return "YES"; else return "NO";
}

int main() {
    int n;
    string s;
    cin >> s >> n;
    cout << check(s, n);
}