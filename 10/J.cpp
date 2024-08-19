#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    int n, num, m; cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    rotate(v.begin(), v.begin() + m, v.end());
    reverse(v.begin(), v.end());
    for(auto el : v) {
        cout << el << " ";
    }
    return 0;
}