    #include <iostream>
    using namespace std;

    int convert(int n) {
        return abs(n);
    }

    int main() {
        int n; cin >> n;
        cout << convert(n);
        return 0;
    }