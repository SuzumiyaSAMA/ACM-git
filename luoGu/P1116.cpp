#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	int N = -1, result = 0;
	vector<int> ivec;
	cin >> N;
	for(int count = 0; count < N; count++){
		int num = -1;
		cin >> num;
		ivec.push_back(num);
	}
	for(int countO = 0; countO < N-1; countO++){
		for(int countI = 0; countI < N-1-countO; countI++){
			if(ivec[countI] > ivec[countI+1]){
				int temp = ivec[countI];
				ivec[countI] = ivec[countI+1];
				ivec[countI+1] = temp;
				result++;
			}
		}
	}
	cout << result << endl;
	return 0;
}
