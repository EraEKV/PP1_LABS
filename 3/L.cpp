    #include <iostream>
    #include <algorithm>
    using namespace std;

    int main() {
        int n, l, k;
        cin >> n ;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> l;
        int c[n + l];
        for(int i = 0; i < n + l; i++) {
            if(i < n) {
                c[i] = a[i];
            } else {
                cin >> c[i];
            }
        }
        sort(c, c + n + l);
        for(auto now : c) {
            cout << now << " ";
        }
        return 0;
    }
