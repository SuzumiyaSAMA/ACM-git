#include <iostream>
using namespace std;
int cheak(int num, int target){
	int result = 0;
	if(num%10 == target)
		result++;
	while(num /= 10)
		if(num%10 == target)
			result++;
	return result;
}
int main(int argc, const char * argv[]) {
	int n = 0, x = 0, result = 0;
	cin >> n >> x;
	for (int count = 1; count <= n; count++)
		result += cheak(count, x);
	cout << result << endl;
	return 0;
}
