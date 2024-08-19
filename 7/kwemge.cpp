#include <iostream>
using namespace std;

int main() {
    int s = 5, m = 5;
    while(1) {
        m *= -4;
        s += m;
        if(m == -20971520) break;
    }
    cout << s;
    return 0;
}