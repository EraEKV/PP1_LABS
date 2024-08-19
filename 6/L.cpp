#include <iostream> 
using namespace std;

string check(string s, int n) {
    int x = 0, e, e1;
    for(int i = 0; i < s.size(); i++) {
        e = s[i] - '0';
        if(e >= 0 && e <= 9) x++; else x = 0;
        if(x == n) return "Valid";
    }
    return "Not valid";
}

int main() {    
    string s;
    int n;
    cin >> s >> n;
    cout << check(s, n);
    return 0;
}