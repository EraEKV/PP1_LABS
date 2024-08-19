#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

void checkQueue(deque <string>& dq, deque <string>& realOrder, int& q);

int main() {
    deque <string> dq;
    deque <string> realOrder;
    int n, q; cin >> n;
    string name;
    for(int i = 0; i < n; i++) {
        cin >> q;
        if(q == 1) { 
            cin >> name;
            dq.push_back(name);
        }
        checkQueue(dq, realOrder, q);
    }
    while(!realOrder.empty()) {
        cout << realOrder.front() << endl;
        realOrder.pop_front();
    }
    return 0;
}



void checkQueue(deque <string>& dq, deque <string>& realOrder, int& q) {
    if(q == 1) {
        realOrder.push_back(dq.front());
    } else {
        dq.pop_front();
        if(dq.empty()) {
            realOrder.push_back("queue is empty");
            return;
        } else {
            realOrder.push_back(dq.front());
        }
    }
}
