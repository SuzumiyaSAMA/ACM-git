#include <iostream>
#include <vector>
using namespace std;
int main (void){
    int Times = 0, count = 0;
    cin >> Times;
    while (count++ < Times){
        long long a = 0, b = 0, c = 0;
        cin >> a >> b >> c;
        if (a+b > c) cout << "Case #" << count << ": true" << endl;
        else cout << "Case #" << count << ": false" << endl;
    }
    return 0;
}
