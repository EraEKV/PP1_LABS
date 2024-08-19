#include <iostream>
using namespace std;

int main() {
    int n, d, s = 1;
    cin >> n;
    d = (n - 1) * 2;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= d; j++) {
            if(d / 2 == j) {
                for(int k = 0; k < s; k++) {
                    cout << "*";
                }
            } else {
                cout << ".";
            }
        }
        s += 2;
        d -= 2;
        cout << endl;
    }
    return 0;
}