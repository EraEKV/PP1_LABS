#include <iostream>
#include <vector>
using namespace std;

int minimum(vector <int>& v);

int main() {
    int n, t, k; cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        cin >> t;
        v.push_back(t);
    }
    cin >> k;
    for(int i = 0; i < k; i++) {
        cout << minimum(v) << " ";
    }
    return 0;
}

int minimum(vector <int>& v) {
    int m = v[0], p = 0;
    for(int i = 1; i < v.size(); i++) {
        if(m > v[i]) {
            m = v[i];
            p = i;
        }
    }
    v.erase(v.begin() + p);
    return m;
}
