#include <iostream>
using namespace std;

int main() {
    int n, space; 
    cin >> n;
    for(int i = 1; i <= n; i++) {
        space = n - i;
        for(int j = 1; j <= n; j++) {
            if(space > 0) {
                cout << " ";
            } else {
                cout << "*";
            }
            space--;
        }   
        cout << endl;
    }
    return 0;
}