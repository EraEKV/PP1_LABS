#include <iostream>
#include <vector>
using namespace std;

int unique(vector <int>& v);

int main() {
    int n, t; cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        cin >> t;
        v.push_back(t);
    }
    cout << unique(v);;
    return 0;
}

int unique(vector <int>& v) {
    int u, s = 0;
    for(int i = 0; i < v.size(); i++) {
        u = v[i];
        for(int j = i + 1; j < v.size(); j++) {
            if(u == v[j]) {
                v.erase(v.begin() + j);
            }
        }
    }
    return v.size();
}
