#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (void){
    int TestTimes = 0, Times = 0;
    cin >> TestTimes;
    while (Times++ < TestTimes){
        double a = 0, b = 0, r = 0, Xa = 0, Ya = 0, w = 0, t = 0;
        cin >> a >> b >> r >> Xa >> Ya >> w >> t;

        double Xb = a + r*cos(w*t), Yb = b + r*sin(w*t);
        double Lab_a = Yb-Ya, Lab_b = Xa-Xb, Lab_c = (Xb-Xa)*Ya+(Ya-Yb)*Xa;
        double d = abs(a*Lab_a + b*Lab_b + Lab_c)/sqrt(pow(Lab_a,2) + pow(Lab_b,2));
        cout << fixed << setprecision(2) << 2*sqrt(pow(r,2) - pow(d,2)) << endl;
    }
    return 0;
}
