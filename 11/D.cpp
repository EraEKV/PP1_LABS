#include <iostream>
#include <vector>
#include <set>
using namespace std;

string isCool(vector<vector<int>> & vec, int & r, int & c);

int main() {
    int r, c; cin >> r >> c;
    vector <vector<int>> vec(r, vector<int> (c));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> vec[i][j];
        }
    }
    cout << isCool(vec, r, c);
    return 0;
}


string isCool(vector<vector<int>> & vec, int & r, int & c) {
    set <int> s;
    for(int i = 0; i < r - 1; i++) {
        for(int j = 0; j < c - 1; j++) {
            s.insert(vec[i][j]);
            s.insert(vec[i][j + 1]);
            s.insert(vec[i + 1][j]);
            s.insert(vec[i + 1][j + 1]);
            if(s.size() == 1) return "NO";
            else s.clear();
        }
    }
    return "YES";
}