#include <iostream>
using namespace std;

int main() {    
    int n, s = 0;
    while(cin >> n) {
        s += n; 
        if (cin.get() == '\n') {
            cout << s;
            return 0;
        }
    }
}