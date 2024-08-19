#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m, num; cin >> n >> m;
    vector <int> v1(n);
    vector <int> v2(m);
    for(int i = 0; i < n; i++) {        
        cin >> v1[i];
    }
    for(int i = 0; i < m; i++) {        
        cin >> v2[i];
    }

    
    vector <int>::iterator it1;
    vector <int>::iterator it2;

    it1 = unique(v1.begin(), v1.end());
    it2 = unique(v2.begin(), v2.end());

    v1.resize(distance(v1.begin(), it1));
    v2.resize(distance(v2.begin(), it2));

    vector <int> v;
    for (int i = 0; i < v1.size(); i++)
    {
        v.push_back(v1[i]);
        v.push_back(v2[i]);
    }
    
    
    vector <int>::iterator it;
    it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it)); 

    if (v[v.size()-1] == 0)
    {
        v.erase(v.begin() + v.size()-1);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}


// n = v1.size(); m = v2.size();
    // for(int i = 0; i < v1.size(); i++) {
    //     if(i > n && i > m) {
    //         if(i > n) {
    //             cout << v2[i] << " ";
    //         } 
    //         else if(i > m) {
    //             cout << v1[i] << " ";
    //         }
    //     } else {
    //         cout << v1[i] << " " << v2[i] << " ";
    //     }
    // }

    // for(auto el : v2) {
    //     cout << el << " ";
    // }
