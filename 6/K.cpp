#include <iostream>
using namespace std;

int sum(string s) {
    int x = 0;
    for(auto i : s) {
        x += i - '0';
    }
    return x;
}

int main() {
    string s; cin >> s;
    cout << sum(s);
    return 0;
}