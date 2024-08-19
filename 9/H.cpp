#include <iostream>
#include <map>
using namespace std;

int main() {
    map <string, int> m;
    int n; cin >> n;
    string s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        if(!m[s]) m[s] = i + 1;
    }
    for(auto el : m) {
        cout << el.first << " " << el.second << endl;
    }
    return 0;
}