#include <iostream>
using namespace std;

string change(string s) {
    string t = "", gl = "AaEeIiOoUu";
    bool f = true;
    for(auto i : s) {
        f = true;
        for(auto j : gl) {
            if(i == j) f = false;
        }
        if(f) t += i;
    }
    return t;
}

int main() {
    string s;
    getline(cin, s);
    cout << change(s);
    return 0;
}