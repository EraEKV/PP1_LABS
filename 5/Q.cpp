#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t, l = "";
    cin >> s >> t;
    for(int i = 0; i < t.size() / s.size(); i++) {
        l += s;
    }
    if(t == l) {cout << "YES";} else {cout << "NO";}
    return 0;
}
