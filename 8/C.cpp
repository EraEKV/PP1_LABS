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
    for(int i = 0; i < n; i++) {
        if(i >= a && b >= a) {
            cout << v[b] << " ";
            b--;
            continue;
        }
        cout << v[i] << " ";
    }
    return 0;
}