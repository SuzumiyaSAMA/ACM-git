#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	int result = 0;
	double distance = 0, n = 2, target = -1;
	cin >> target;
	while(distance < target){
		result++;
		distance += n;
		n *= 0.98;
	}
	cout << result << endl;
	return 0;
}
