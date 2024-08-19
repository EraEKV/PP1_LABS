#include <iostream>
#include <map>
using namespace std;

int main() {
    map <string, int> m;
    int N, M, k, sum; cin >> N;
    string s;
    for(int i = 0; i < N; i++) {
        cin >> M;
        for(int j = 0; j < M; j++) {
            cin >> s >> k;
            sum += k;
            if(!m[s]) m[s] = k;
            else m[s] += k;
        }
    }
    for(auto el : m) {
        cout << el.first << " " << (double)el.second / sum * 100 << endl;
    }
    return 0;
}