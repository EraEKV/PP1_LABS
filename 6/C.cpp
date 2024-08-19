#include <iostream>
#include <set>
using namespace std;

int countEqualElements(int* a, int n);
int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << countEqualElements(a, n) ;
    return 0;
}


int countEqualElements(int* a, int n) {
    multiset<int> b;
    int count = 0, num;

    for (int i = 0; i < n; i++) {
        cin >> num;
        b.insert(num);
    }

    for (int i = 0; i < n; i++) {
        if (b.find(a[i]) != b.end()) {
            count++;
            b.erase(b.find(a[i]));
        }
    }
    return count;
}