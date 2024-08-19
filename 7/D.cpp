#include <iostream>
using namespace std;

int main() {    
    string s; cin >> s;
    int x = 0;
    for(auto i : s) {
        x += i - '0'; 
    }
    cout << x;
}
