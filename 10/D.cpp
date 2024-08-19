#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortComparator(vector<int>& a, vector<int>& b) {
    int sum1 = 0, sum2 = 0;
    for(int i = 1; i < a.size(); i++) {
        sum1 += a[i];
    }
    for(int i = 1; i < b.size(); i++) {
        sum2 += b[i];
    }
    if(sum1 < sum2) return true; else if(sum2 < sum1) return false;
    else {
        if (a[0] < b[0]) return true;
        if (a[0] > b[0]) return false;

        if(max_element(a.begin(), a.end()) > max_element(b.begin(), b.end())) return true; else return false;
    }
}

int main() {
    int n, num, size; cin >> n;
    vector<vector<int>> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> size;
        vec[i].push_back(size);
        for(int j = 0; j < size; j++) {
            cin >> num;
            vec[i].push_back(num);
        }
    }
    sort(vec.begin(), vec.end(), sortComparator);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
