#include <iostream>
using namespace std;

void shifting(string & s, int & n);

int main() {
    string s; 
    int n;
    cin >> n >> s;
    shifting(s, n);
    return 0;
}

void shifting(string & s, int & n) {
    for(int i = 0; i < s.size(); i++) {
        char chr = s[i] + n;
        if(chr - 1 >= 64 && chr - 1 <= 89) {
            cout << chr;
        } else {
            chr -= 26;
            cout << chr;
        }
    }
}