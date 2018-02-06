#include <bits/stdc++.h>
using namespace std;
int main(){
	int L = -1, R = -1;
	int result = 0;
	cin >> L >> R;
	for(int count = L; count <= R; count++){
		int temp = count;
		while(temp){
			if(temp%10 == 2)
				result++;
			temp/=10;
		}
	}
	cout << result << endl;
	return 0;
}
