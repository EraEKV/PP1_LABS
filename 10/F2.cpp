#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    double sumCredit = 0, points = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        double att1, att2, final, cred;
        cin >> att1 >> att2 >> final >> cred;
        if (att1 + att2 < 30 || final < 20) {
            sumCredit += cred;
        } else {
            points = att1 + att2 + final;
            sumCredit += cred;
        }
        if(points <= 100 && points >= 95){
            int k = 4 * cred;
            sum += k;
        }
        else if(points <= 94 && points >= 90){
            double k = (3.6666667 * cred);
            sum += k;
        }
        else if(points <= 89 && points >= 85){
            double k = (3.333333 * cred);
            sum += k;
        }
        else if(points <= 84 && points >= 80){
            int k = 3 * cred;
            sum += k;
        }
        else if(points <= 79 && points >= 75){
            double k = 2.6666667 * cred;
            sum += k;
        }
        else if(points <= 74 && points >= 70){
            double k = 2.333333 * cred;
            sum += k;
        }
        else if(points <= 69 && points >= 65){
            double k = 2 * cred;
            sum += k;
        }
        else if(points <= 64 && points >= 60){
            double k = 1.6666667 * cred;
            sum += k;
        }
        else if(points <= 59 && points >= 55){
            double k = (1.333333 * cred);
            sum += k;
        }
        else if(points <= 54 && points >= 50){
            double k = 1 * cred;
            sum += k;
        }
        points = 0;
    }
    cout << (sum)/sumCredit ;
 
}