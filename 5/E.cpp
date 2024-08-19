#include <iostream>
#include <string>
using namespace std;

int main() {
    int s1 = 0, s2 = 0;
    string n, k;
    cin >> n;
    for(int i = 0; i < n.size(); i++) {
            k = n[i];
        if((i + 1) % 2 == 0) {
            s1 += stoi(k);
        } else {
            s2 += stoi(k);
        }
    }
    if(s1 == s2) {cout << "YES";} else {cout << "NO";}
    return 0;
}