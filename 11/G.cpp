#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    map <string, set<int>> m;
    int n, day; cin >> n;
    string name;
    for(int i = 0; i < n; i++) {
        cin >> name >> day;
        auto it = m.find(name);
        if(it != m.end()) {
            it -> second.insert(day);
        } else {
            m.emplace(name, set <int> {day}); 
        }
    }
    for(auto el : m) {
        const set<int>& daysCount = el.second;
        if(daysCount.size() >= 3) cout << el.first << " +1" << endl; else cout << el.first << " NO BONUS" << endl;
    }
    return 0;
}
