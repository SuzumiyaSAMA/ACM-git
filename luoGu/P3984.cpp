#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	int N = -1, T = -1, result = 0;
	vector<int> winDay;
	cin >> N >> T;
	int num = -1;
	for(int count = 0; count < N; count++){
		cin >> num;
		winDay.push_back(num);
	}
	for(int count = 0; count < N-1; count++){
		if((winDay[count]+T) < winDay[count+1])
			result += T;
		else
			result += (winDay[count+1]-winDay[count]);
	}
	cout << result+T << endl;
	return 0;
}
