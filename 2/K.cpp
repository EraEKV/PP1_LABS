#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int a, i = 1;
    cin >> a;
    while(pow(i, 2) <= a) {
        cout << pow(i, 2) << endl;
        i++;
    }

    return 0;
}