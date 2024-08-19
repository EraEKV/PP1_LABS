#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long power() {
    static long long i = -1;
    if(i == 14) return 437893890380859375;
    return pow(i, ++i);
}

int main() {
    int n; cin >> n;
    vector <long long> v1;
    for(int i = 0; i < n + 1; i++) {
        v1.push_back(i);
    }
    generate(v1.begin(), v1.end(), power);
    for(auto el : v1) {
        cout << el << " ";
    }
    return 0;
}