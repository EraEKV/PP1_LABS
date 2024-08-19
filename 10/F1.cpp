#include <iostream>
using namespace std;

double GPA(int & totalPoints, int & credit) {
    int s = 59, GP = 1;
    if(totalPoints >= 95) return credit * 4.0;
    else if(totalPoints <= 54) return credit * 1.0;
    while(s < totalPoints) {
        GP++; s += 5;
    }
    return (GP / 3.0 + 1) * credit;
}


int main() {
    int n, f_a, s_a, f, c, creditSum = 0, totalPoints; cin >> n;
    double sumGP = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> f_a >> s_a >> f >> c;
        if(f_a + s_a >= 30) {
            if(f >= 20) {
                totalPoints = f_a + s_a + f;
                sumGP += GPA(totalPoints, c);
            }
        }
        creditSum += c;
    }
    cout << sumGP / creditSum;
}   


// cout << s << endl;
    // if(credit % 3 == 0) { 
    //     cout << (GP + credit) * credit / 3.0 << endl;
    //     return (GP + credit) * credit / 3.0;
    // }
    // cout << (GP / 3.0 + 1) * credit << endl;