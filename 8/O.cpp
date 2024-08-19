#include <iostream>
#include <vector>
using namespace std;

void sortLetters(vector <string>& v);

int main() {
    vector <string> v;
    string t; cin >> t;
    v.push_back(t);
    sortLetters(v);  
    return 0;
}

void sortLetters(vector <string>& v) {
    int u;
    string letters = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz", t = "";
    for(int j = 0; j < 52; j += 2) {
        for(int i = 0; i < v[0].size(); i++) {
            if(letters[j] == v[0][i] || letters[j + 1] == v[0][i]) {
                t += letters[j + 1];
                break;
            }
        }
    }
    cout << t.size() << endl;
    for(auto e : t) {
        cout << e << " ";
    }
}