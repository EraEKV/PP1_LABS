#include <iostream>
using namespace std;

int main() {
    int n, f = 1;
    cin >> n;
    for(int i = 2; i < n; i++) {
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                f = 0;
            }
        }
        if(f == 1) {
            cout << i << " is prime" << endl;
        }
        f = 1;
    }
    return 0;
}