#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    int sum = 0;
    for(char c : s) sum += c;
    sum > 300 ? cout << "It is tasty!" : cout << "Oh, no!";
}