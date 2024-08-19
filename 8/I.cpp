#include <iostream>
#include <vector>
using namespace std;

int difference(vector <int>& v);

int main() {
    int n, x; cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    cout << difference(v);
    return 0;
}

int difference(vector <int>& v) {
    int min = v[0], max = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] > max) max = v[i];
        if(v[i] < min) min = v[i];
    }
    return max - min;
}