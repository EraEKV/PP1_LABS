#include <iostream>
using namespace std;

int diff(int a, int b) {
    return abs(a - b);
}

int main()
{   
    int a[3] = {1, 2, 3};
    for(auto now : a) {
        cout << now;
    }
    int n; cin >> n;
    int array[n];
    for (int i = 0; i < n * 2; i++){
        cin >> array[i];
    }
    for (int i = 0; i < n; i++){
        cout << diff(array[i], array[i + n]) << " ";
    }
    return 0;
}
