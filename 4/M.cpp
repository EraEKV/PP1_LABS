#include <iostream>
using namespace std;
 
int main() {
    int n; cin >> n;
    long a[n][n];
    long k = 1;
    long i = 0;
    long j = 0;
    while (k <= n * n) {
        a[i][j] = k;
        if (i <= j + 1 && i + j < n - 1)
            j++;
        else if (i < j && i + j >= n - 1)
            i++;
        else if (i >= j && i + j > n - 1)
            j--;
        else 
            i--;
        k++;
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j)
            cout << a[i][j] <<  " ";
        cout << endl;
    }
}