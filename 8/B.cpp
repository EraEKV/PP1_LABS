#include <iostream>
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
    for(int i = n - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    return 0;
}