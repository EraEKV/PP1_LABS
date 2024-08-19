#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n; 
    cin >> n;
    multimap<int, int> m;
    vector<pair<int, int>> v(n); 
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++) {
        m.emplace(v[i].first + v[i].second, i + 1);
    }

    for (auto el : m) {
        cout << el.second << " ";
    }

    return 0;
}

