#include <iostream>
#include <cmath>
using namespace std;
int main (void){
    int TestTimes = 0;
    cin >> TestTimes;
    while (TestTimes--){
        int n = 0, k = 0;
        cin >> n >> k;
		int LoopTimes = n / (k * 2);
        long long result = LoopTimes * pow(k, 2);
        for (int num = (LoopTimes * 2 * k) + 1; num <= n; num++){
            if (num - (LoopTimes*2*k) <= k)
                result -= num;
            else
                result += num;
        }
        cout << result << endl;
    }
    return 0;
}
