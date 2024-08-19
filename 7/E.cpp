#include <iostream>
using namespace std;

int main() {    
    int n; cin >> n;
    while(n / 2 != 0) {
        if(n % 2 != 0) {
            cout << "No";
            return 0;
        }
        n /= 2;
    }
    cout << "Yes";
    return 0;
}
