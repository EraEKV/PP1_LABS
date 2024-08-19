#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        cout << "Yes";
        return 0;
    }
    cout << "No";
    return 0;
}