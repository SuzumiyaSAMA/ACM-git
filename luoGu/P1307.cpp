#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	string INPUT;
	bool flag = false;
	cin >> INPUT;
	if(INPUT[0] == '-'){
		INPUT.erase(INPUT.begin());
		flag = true;
	}										//cheak minus
	if(flag) cout << '-';
	auto it = INPUT.end()-1;
	while (*it == '0') it--;
	while (it >= INPUT.begin()){
		cout << *it;
		it--;
	}
	cout << endl;
	return 0;
}
