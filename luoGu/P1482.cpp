#include <bits/stdc++.h>
using namespace std;
int main(){
	int a = 0, b = 0, c = 0, d = 0;
	char Junk = 0;
	cin >> a >> Junk >> b >> c >> Junk >> d;
	a *=c; b *=d;
	for(int count = a>b?b:a; count >= 0; count--){
		if(a%count == 0 && b%count == 0){
			a /= count; b /= count;
			break;
		}
	}
	cout << b << " " << a << endl;
	return 0;
}
