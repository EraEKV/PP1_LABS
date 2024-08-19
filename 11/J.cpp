#include <iostream>
#include <cmath>
#include <map>
using namespace std;

double distance(int& x, int& y, int& x1, int& y1);

int main() {
    int x, y, x1, y1, n; cin >> x >> y >> n; 
    multimap <double, pair<int, int>> m;
    for(int i = 0; i < n; i++) {
        cin >> x1 >> y1;
        m.emplace(distance(x, y, x1, y1), make_pair(x1, y1));  
    }
    for(auto el : m) {
        cout << el.second.first << " " << el.second.second << endl;
    }
    return 0;
}


double distance(int& x, int& y, int& x1, int& y1) {
    return sqrt(pow((x - x1), 2) + pow((y - y1), 2) );
}