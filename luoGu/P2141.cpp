#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
	int n = -1, result = 0;
	cin >> n;
	vector<int> ivec(n, -1);
	bool ar[100] = {false};										//check if this number has been sumed
	for(int count = 0; count < n; count++)
		cin >> ivec[count];
	for(int countO = 0; countO < n; countO++){
		for(int countI = countO+1; countI < n; countI++){		//a number plus another one won't get one of them
			int num = abs(ivec[countI]+ivec[countO]);
			auto temp = find(ivec.begin(), ivec.end(), num);
			if(temp != ivec.end() && !ar[temp-ivec.begin()]){
				ar[temp-ivec.begin()] = true;
				result++;
			}
		}
	}
	cout << result << endl;
	return 0;
}
