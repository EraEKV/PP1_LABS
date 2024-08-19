#include <iostream> 
#include <vector> 
using namespace std;

int maxArea(vector <int> & v, int n);

int main() {
    int n; cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    cout << maxArea(vec, n);
    return 0;
}

int maxArea(vector <int> & v, int n) {
    int i = 0, it1, it2, m = 1, w;
    while(i < n) {
        w = 1; it1 = 1; it2 = 1;
        while(1) {
            if(i + it1 < n && v[i] <= v[i + it1]) {
                it1++; w++;
            } 
            else if(i - it2 >= 0 && v[i] <= v[i - it2]) {
                it2++; w++;
            } 
            else {
                if(w * v[i] > m) {
                    m = w * v[i]; 
                }
                break;
            }
        }
        i++;
    }
    return m;
}