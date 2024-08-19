#include <iostream>
using namespace std;

int main() {
    int n, m; cin >> n;
    int a[n];
    pair <long long, int> d = {1e9, -1};
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    for(int i = 0; i < n; i++) if(abs(m - a[i]) < d.first) d = {abs(m - a[i]), i};
    cout << d.second;
}