#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    int n, num; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    vector <int> rev = v;
    reverse(rev.begin(), rev.end());
    for(int i = 0; i < n; i++) {
        if(v[i] == rev[i]) {
            cout << "OK" << endl;
        } else {
            cout << "Instead of " << v[i] << " here was " << rev[i] << endl;
        }
    } 
    return 0;
}