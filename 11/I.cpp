#include <iostream>
#include <map>
using namespace std;

string isPalindrome(map <char, int>& m, int& count, string& s);

int main() {
    int count;
    map <char, int> m;
    string s; cin >> s;
    cout << isPalindrome(m, count, s);
    return 0;
}


string isPalindrome(map <char, int>& m, int& count, string& s) {
    for(char c : s) {
        if(!m[c]) m[c] = 1; else m[c] += 1;
    }
    for(auto el : m) {
        if(count > 1) return "JOJO";
        if(el.second % 2 == 1) count++;
    }
    if(count > 1) return "JOJO";
    return "ZA WARUDO TOKI WO TOMARE"; 
}