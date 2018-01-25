#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	int N = -1, previous = -1, length = 1, result = 0;
	cin >> N;
	for(int count = 0; count < N; count++){
		int num = -1;
		cin >> num;
		if(num > previous)
			length++;
		else
			length = 1;
		if(length > result)
			result = length;
		previous = num;
	}
	cout << result << endl;
	return 0;
}
