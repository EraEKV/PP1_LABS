#include <iostream>
using namespace std;

int main(){
    int k;
    cin >> k;
    long long n[k];
    int cnt = 1;

    for(int i = 0; i < k; i++){
        cin >> n[i];
    }
    
    for(int i = 0; i < k; i++){
        if(n[i] > n[0]){
            n[0] = n[i];
            cnt = i + 1;
        }
    }
    cout << cnt;
}