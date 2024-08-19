#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, i = 0, x, a, b; cin >> n;
    vector <int> v;
    while(i < n) {
        cin >> x;
        v.push_back(x);
        i++;
    }
    cin >> a >> b;
    v.erase(v.begin() + a, v.begin() + b + 1);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}