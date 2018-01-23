#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	long int x = -1, n = -1;
	cin >> x >> n;
	long days = n/7*5;
	n = n%7;
	while(n--){
		if(x+n == 6 || x+n == 7)
			continue;
		days++;
	}
	cout << days*250 << endl;
	return 0;
}
