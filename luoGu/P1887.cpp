#include <iostream>
using namespace std;
long long m = -1, n = -1;
long long result[1000000];
int main(int argc, const char * argv[]) {
	cin >> n >> m;
	for(int count = 0; count < m; count++)
		result[count] = n/m;
	long long sum = 0;
	for(long long num:result)
		sum += num;
	for(long long count = m-1; count >= 0; count--){
		if(sum == n)
			break;
		result[count]++;
		sum++;
	}
	cout << result[0];
	for(int count = 1; count < m; count++)
		cout << " " << result[count];
	return 0;
}
