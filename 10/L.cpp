#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, num = 1, i = 0; cin >> n;
    int s = (1 + n) * n / 2;
    vector <int> v(s);
    while(i < s) {
        fill(v.begin() + i, v.begin() + i + num, num);
        i += num;
        num++;
    }
    for(auto el : v) {
        cout << el << " ";
    }
    return 0;
}
