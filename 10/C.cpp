#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main() {
    stack <char> st;
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(!st.empty()) {
            int num = (st.top() - '0') * 10 + s[i] - '0';
            if(ceil((double)sqrt(num)) == floor((double)sqrt(num))) {
                st.pop();
                continue;
            }
        }
        st.push(s[i]);
    }
    if(st.empty()) {
        cout << "Stack is empty";
        return 0;
    }
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
    return 0;
}