#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

long double pythagor(long double a, long double b) {
    return sqrt((a * a + b * b));
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << setprecision(4) << pythagor(a, b);
    return 0;
}