#include <iostream>
using namespace std;

int main() {    
    string s, t = ""; cin >> s;
    for(int i = s.size() - 1; i >= 0; i--) {
        t += s[i];
    }
    if(s == t) cout << "Yes"; else cout << "No";
    return 0;
}
