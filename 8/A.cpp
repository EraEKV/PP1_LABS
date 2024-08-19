#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, i = 0, x; cin >> n;
    vector <int> v;
    while(i < n) {
        cin >> x;
        v.push_back(x);
        i++;
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}