#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPalindrome(vector <int>& v, int& n);

int main() {
    int n; cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    do {
        if(isPalindrome(v, n)) {
            for (auto el : v) {
                cout << el << " ";
            }
            return 0;   
        }
    } while (next_permutation(v.begin(), v.end()));
    cout << "Impossible";
    return 0;
}


bool isPalindrome(vector <int>& v, int& n) {
    int i = 0, j = n - 1;
    while(i < n && j >= 0) {
        if(v[i] != v[j]) return false;
        i++;
        j--;
    }
    return true;
}