#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i = 0, k, x, b; cin >> n;
    vector <int> v;
    while(i < n) {
        cin >> x;
        v.push_back(x);
        i++;
    }
    cin >> k >> b;
    v.insert(v.begin() + k, b);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}