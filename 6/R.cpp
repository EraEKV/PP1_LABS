#include <iostream>
using namespace std;

char convert(char l) {
    if(l >= 97 && l <= 122) return l - 32; else return l;
}

int main() {
    char s; cin >> s;
    cout << convert(s);
    return 0;
}