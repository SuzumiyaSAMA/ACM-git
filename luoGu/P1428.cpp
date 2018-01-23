#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	int n = -1;
	cin >> n;
	vector<int> ivec(n, -1);
	for(int count = 0; count < n; count++)
		cin >> ivec[count];
	for(vector<int>::iterator it = ivec.end()-1; it >= ivec.begin(); it--){
		int result = 0;
		for(vector<int>::iterator it2 = it; it2 >= ivec.begin(); it2--)
			if(*it > *it2)
				result++;
		*it = result;
	}
	for(int num: ivec)
		cout << num << " ";
	cout << endl;
	return 0;
}
