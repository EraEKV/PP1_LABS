#include <iostream>
using namespace std;
 
int main() {
    int a, pow = 1; cin >> a;
    for(int i = 0; pow <= a; i++) {
        cout << pow << " ";
        pow *= 2;
    }

    return 0;
}