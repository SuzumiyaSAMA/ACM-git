#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
int main (void){
    int TestTimes = 0;
    cin >> TestTimes;
    while (TestTimes--){
        int n = 0, m = 0, q = 0;
        cin >> n >> m >> q;
        vector<int> ivec;
        for (int count = 0; count < n*m; count++){
            int INPUT = 0;
            cin >> INPUT;
            ivec.push_back(INPUT);
        }
        sort(ivec.begin(), ivec.end(), greater<int>());
        while(q--){
            int result = 0, height = 0;
            cin >> height;
            for (vector<int>::iterator iter = ivec.begin(); *iter > height && iter < ivec.end(); iter++, result++);
            cout << result << endl;
        }
    }
    return 0;
}
