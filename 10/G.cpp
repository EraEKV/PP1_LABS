#include <iostream>
#include <map>
using namespace std;

bool checkUnique(multimap <pair<string, int>, pair<string, int>>& m,  pair<string, int>& key, pair<string, int>& value);

int main() {
    int n; cin >> n;
    pair<string, int> key;
    pair<string, int> value;
    multimap <pair<string, int>, pair<string, int>> m;
    for(int i = 0; i < n; i++) {
        cin >> key.first >> key.second >> value.first >> value.second;
        if(checkUnique(m, key, value)) {
            m.emplace(key, value);
        }
    }
    for(auto el : m) {
        cout << el.first.first << " and " << el.second.first << " " << el.first.second + el.second.second << endl;
    }
    return 0;
}


bool checkUnique(multimap <pair<string, int>, pair<string, int>>& m,  pair<string, int>& key, pair<string, int>& value) {
    int c = 1;
    for(auto el : m) {
        if(el.first == key && el.second == value) {
            c++;
            if(c == 2) return false;
        }
    }
    return true;
}