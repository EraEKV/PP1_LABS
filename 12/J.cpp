#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[]) {
    int n1, n2, temp; cin >> n1;
    int a[n1];
    for(int i = 0; i < n1; i++) cin >> a[i];
    map <int, int> mp;
    for(int i = 0; i < n1; i++) {
        for(int j = i + 1; j < n1; j++) {
            mp.emplace(a[i] + a[j], 1);
        }
    }
    cin >> n2;
    for(int i = 0; i < n2; i++) {
        cin >> temp;
        !mp[temp] ? cout << "NO" << endl : cout << "YES" << endl;
    }
}