#include <iostream>
#include <deque>
using namespace std;

int largest(int& a, int& b, int& k);

int main() {
    int a, b, k; cin >> a >> b >> k;
    cout << largest(a, b, k);
    return 0;
}


int largest(int& a, int& b, int& k) {
    deque <int> dq;
    int i = 1;
    while(i <= a && i <= b) {
        if(a % i == 0 && b % i == 0) { 
            dq.push_back(i);
        }
        i++;
    }
    i = 1;
    while(i < k) {
        dq.pop_back();
        i++;
    }
    return dq.back();
}