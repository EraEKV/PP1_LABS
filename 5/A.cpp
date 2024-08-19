#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length(), lw = 0, up = 0;
    string l = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 27; j++) {
            if(s[i] == l[j]) {
                lw++;
            }
        }
    }
    up = n - lw;
    cout << lw << " " << up;
    return 0;
}
