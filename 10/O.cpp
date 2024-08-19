#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

void binary(int num) {
    stack <int> st;
    while(num != 0) {
        st.push(num % 2);
        num /= 2;
    }   
    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}

int main() {
    vector <int> v;
    int n, num; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> num;
        v.push_back(num);
    }
    for_each(v.begin(), v.end(), binary);
    return 0;
}