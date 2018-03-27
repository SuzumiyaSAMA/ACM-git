#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int count5 = 0, count0 = 0, num = -1, n = -1;
	cin >> n;
	for(int count = 0; count < n; count++){
		cin >> num;
		if(num == 5) count5++;
		else count0++;
	}
	if(count5 >=9 && count0 >=1){
		for(int count = 0; count < count5/9; count++)
			cout << "555555555";
		while(count0-- > 0)
			cout << "0";
	}
	else if(count0 != 0)
		cout << "0";
	else cout << "-1";
    return 0;
}
