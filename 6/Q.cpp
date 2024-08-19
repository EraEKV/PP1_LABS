#include <iostream>
using namespace std;

double percentage(double a, double b) {
    return (b * 100 / a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << percentage(a, b);
    return 0;
}