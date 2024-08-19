#include <iostream>
using namespace std;

int main() {    
    string s; cin >> s;
    int c = 0;
    for(auto e : s) {
        if((e - '0') % 2 == 0) c++;
    }
    cout << c;
    return 0;
}
