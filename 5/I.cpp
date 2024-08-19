#include <iostream>
using namespace std;

int main() {
    int s1[26] = {}, t1[26] = {}, j = 0;
    string s, t;
    cin >> s >> t;
    if(s.size() != t.size()) {
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < s.size(); i++) {
        s1[s[i] - 'a'] += 1;
        t1[t[i] - 'a'] += 1;
    }
    while(j < 26) {
        if(s1[j] != t1[j]){
            cout << "NO";
            return 0;
        }
        j++;
    }
    cout << "YES";
    return 0;
}

// lfpbavjsmppdtlkfwnyfmbdhptdswsoulrbjhhy lfpbavjsmppdtlkfwnyfmbdhptdswsoulrbhyjh