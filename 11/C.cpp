#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

struct sortByPercentage {
    bool operator()(const std::pair<string, double>& a, const std::pair<string, double>& b) const {
        if(a.second == b.second) {
            return a.first > b.first;
        } else return a.second > b.second;
    }
};


int main() {
    int n, points, allPoints = 0, i = 0; cin >> n;
    map <string, int> m;
    string name;
    for(int i = 0; i < n; i++) {
        cin >> name >> points;
        allPoints += points;
        if (m.find(name) == m.end()) m[name] = points; 
        else m[name] += points;
    }
    vector <pair<string, double>> vec;
    for(const auto & el : m) {
        vec.push_back(make_pair(el.first, (double)el.second * 100 / allPoints));
    }
    sort(vec.begin(), vec.end(), sortByPercentage());
    for(const auto & el : vec) {
        cout << el.first << " " << el.second << "%" << endl;
    }
    return 0;
}


// 31
// Ga 12
// pnw 19
// FsxWhAFGo 29
// id 4
// bW 10
// AiRxv 10
// slM 18
// uiuO 17
// KDLPXq 10
// DGqDWIK 29
// AK 1
// JFvuN 9
// YZYGtdmI 16
// bWQkVJ 15
// yixnAp 5
// EBQQun 9
// JKhyH 8
// EE 3
// roKa 24
// ctZHeBx 11
// a 30
// ffBDL 10
// fDpd 8
// aTX 14
// scyz 27
// U 29
// vFjrjgv 8
// FTWQBCbAm 29
// ToNy 15
// fC 17
// qrzgoHNnQ 10
