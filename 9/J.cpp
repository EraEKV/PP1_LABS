#include <iostream>
#include <map>
using namespace std;

int main() {
    map <string, int> m;
    int n, episodes; cin >> n;
    string dorama;
    for(int i = 0; i < n; i++) {
        cin >> dorama >> episodes;
        if(!m[dorama]) m[dorama] = episodes;
        else m[dorama] += episodes;
    }
    for(auto el : m) {
        cout << el.first << " " << el.second << endl;
    }
    return 0;
}

