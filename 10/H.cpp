#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, num, size; cin >> n;
    set <int> s;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        cin >> num;
        size = s.size();
        s.insert(num);
        if (size != s.size()) {
            v.push_back(num);
        }
    }
    do {
        for (auto el : v) {
            cout << el << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
    return 0;
}
