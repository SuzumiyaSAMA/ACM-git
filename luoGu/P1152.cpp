#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
	int n = 0;
	cin >> n;
	vector<int> ivec(n,0);
	for(int count = 0; count < n; count++)
		cin >> ivec[count];
	for(int count = 0; count < n-1; count++)
		ivec[count] = abs(ivec[count+1]-ivec[count]);	//get all prefix sum
	ivec.pop_back();
	sort(ivec.begin(), ivec.end());
	bool flag = true;
	for(int count = 0; count < n-2; count++)
		if(ivec[count] != ivec[count+1]-1)
			flag = false;								//check is it from 1 to n-1
	if(flag)
		cout << "Jolly" << endl;
	else
		cout << "Not jolly" << endl;
	return 0;
}
