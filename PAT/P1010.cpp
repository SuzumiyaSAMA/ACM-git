#include <iostream>
using namespace std;
int main (void){
    int a= 0, n = 0, flag = 0;;
    while (cin >> a >> n){
        if (n == 0 || a == 0) {
            if (!flag) cout << "0 0";
            continue;
        }
        if (flag == 1) cout << ' ';
        cout << a*n << ' ' << n-1;
        flag = 1;
    }
    return 0;
}
