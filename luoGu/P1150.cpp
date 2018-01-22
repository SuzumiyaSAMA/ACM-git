#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	int n = 0, k = 0, result = 0;
	cin >> n >> k;
	result += n;
	while(n >= k){
		n -= k;
		result++;
		n++;
	}
	cout << result << endl;
	return 0;
}
