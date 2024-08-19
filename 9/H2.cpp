#include <iostream>
#include <queue>
#include <map>
using namespace std;

void counter(priority_queue <string>& pq, int n) {
    int c = 0;
    map <string, int> m;
    for(int i = 0; i < n; i++) {
        if(!m[pq.top()]) m[pq.top()] = 1;
        else m[pq.top()] += 1;
        pq.pop();
    }
    for(auto el : m) {
        cout << el.first << " " << el.second << endl;
    }
}

int main() {
    string s;
    int n; cin >> n;
    priority_queue <string> pq;
    for(int i = 0; i < n; i++) {
        cin >> s;
        pq.push(s);
    }
    counter(pq, n);
    return 0;
}