#include <bits/stdc++.h>
using namespace std;
int main(){
	int M = -1, N = -1;
	int result[10] = {0};
	cin >> M >> N;
	for(int count = M; count <= N; count++){
		int temp = count;
		while(temp != 0){
			result[temp%10]++;
			temp /= 10;
		}
	}
	cout << result[0];
	for(int count  = 1; count < 10; count++)
		cout << " " << result[count];
	cout  << endl;
    return 0;
}
