#include <iostream>
using namespace std;

int main() {    
    string s; cin >> s;
    int m = -100000;
    for(auto e : s) {
        if((e - '0') > m) m = e - '0';
    }
    cout << m;
    return 0;
}
