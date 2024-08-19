#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

unsigned long long power() {
    static long long i = 0;
    if(i == 14) return 437893890380859375; else return pow(i, i++);
}

int main(int argc, char const *argv[]) {
    int n; cin >> n;
    vector <unsigned long long> v;
    for(int i = 0; i < n; i++) v.push_back(i);
    generate(v.begin(), v.end(), power);
    for(auto el : v) cout << el << " ";
    return 0;
}
