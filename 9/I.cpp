#include <iostream>
#include <deque>
using namespace std;

void checkRegistration(string user, deque <string>& dq1, deque <string>& dq2);

int main() {
    deque <string> dq1;
    deque <string> dq2;
    string user;
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> user;
        checkRegistration(user, dq1, dq2);
        dq1.push_back(user);
    }
    for(auto el : dq2) {
        cout << el << endl;
    }
    return 0;
}


void checkRegistration(string user, deque <string>& dq1, deque <string>& dq2) {
    for(auto el : dq1) {
        if(user == el) {
            dq2.push_back("user already exists");
            return;
        }
    }
    dq2.push_back("new user added");
}