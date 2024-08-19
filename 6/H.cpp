#include <iostream>
using namespace std;

string check(string n) {
    for(int i = 0; i < n.size(); i++) {
        if((n[i] - '0') % 2 != 0) {
            return "Not valid";
        }
    }
    return "Valid";
}

int main() {
    string n; cin >> n;
    cout << check(n);
    return 0;
}