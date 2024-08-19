#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    for(long long i = 2; i < n; i++) {
        if (n % i == 0) {
            cout << "No";
            return 0;
        } 
    }   
    cout << "Yes";
    return 0;
}