#include <iostream>
#include <stack>
using namespace std;

void hateOnes(string& s);

int main() {
    string s; cin >> s;
    hateOnes(s);
    return 0;
}


void hateOnes(string& s) {
    stack <char> st;
    for(int i = 0; i < s.size(); i++) {
        st.push(s[i]);
        if(st.top() == s[i + 1] && s[i + 1] == '1') {
            st.pop();
            i++;
            continue;
        }
        cout << st.top();
    }

}


// void hateOnes(string& s) {
//     queue <char> q;
//     for(char c : s) {
//         q.push(c);
//         if(q.size() == 2 && q.front() == '1' && q.back() == '1') {
//             q.pop();
//             q.pop();
//         } else if (q.size() > 2) {
//             cout << q.front();
//             q.pop();
//             cout << q.front();
//             q.pop();
//         }
//     }
// }