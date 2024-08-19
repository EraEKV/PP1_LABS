#include <iostream>  
using namespace std;

int main() {
    int n, m = 1;
    cin >> n;
    for(int i = n; i > 0; i--) {
        for(int j = 1; j <= n; j++) {
            if(i == j) {
                cout << m;
                m++;
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}