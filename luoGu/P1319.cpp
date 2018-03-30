#include <bits/stdc++.h>
using namespace std;
int main(){
	int N = -1;
	cin >> N;
	int num = -1, count = 0;
	bool flag = false;
	while(cin >> num){
		while(num--){
			if(flag) cout << "1";
			else cout << "0";
			count++;
			if(count%N == 0) cout << endl;
		}
		flag = !flag;
	}
    return 0;
}
