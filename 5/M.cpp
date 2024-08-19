#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, x, k;
    int n, n1 = 0;
    cin >> s >> x >> n;
    for(int i = 0; i < s.size(); i++) {
        k = s[i];
        if(k == x) {
            n1++;
        }
    }
    if(n1 == n) {cout << "YES";} else {cout << "NO";}
    return 0;
}
