#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n, n1; cin >> n;
    string login, password;
    deque <pair<string, string>> dq1;
    deque <pair<string, string>> dq;
    for(int i = 0; i < n; i++) {
        cin >> login >> password;
        dq1.push_back(make_pair(login, password));
    }
    cin >> n1;
    for(int i = 0; i < n1; i++) {
        cin >> login >> password;
        dq.push_back(make_pair(login, password));
    }
    bool found;
    for(auto el1 : dq1) {
        found = false;
        for(auto el : dq) {
            if(el1.first == el.first) {
                found = true;
                if(el1.second != el.second) {
                    cout << "password error" << endl;
                }
                else {
                    cout << "correct password" << endl;
                }
                break;
            }
        }
        if(!found) {
            cout << "login error" << endl;
        }
    }
    return 0;
}

