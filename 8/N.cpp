#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void unique(vector <int>& v, vector <int>& v1);

int main() {
    int n, t; cin >> n;
    vector <int> v;
    vector <int> v1;
    for(int i = 0; i < n; i++) {
        cin >> t;
        v.push_back(t);
    }
    unique(v, v1);  
    return 0;
}

void unique(vector <int>& v, vector <int>& v1) {
    int u;
    bool f;
    for(int i = 0; i < v.size(); i++) {
        u = v[i];
        f = false;
        for(int j = i + 1; j < v.size(); j++) {
            if(u == v[j]) {
                v.erase(v.begin() + j);
                i--;
                f = true;
                break;
            }
        }
        if(f) continue;
        if(u % 2 != 0) v1.push_back(u);
    }
    sort(v1.begin(), v1.end());
    for(auto e : v1) {
        cout << e << " ";
    }
}
