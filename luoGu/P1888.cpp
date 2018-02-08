#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;
int gcd(int a, int b){
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}
int main(int argc, const char * argv[]) {
	int iar[3] = {-1};
	cin >> iar[0] >> iar[1] >> iar[2];
	sort(begin(iar), end(iar));
	int temp = gcd(iar[0], iar[2]);
	iar[0] /= temp; iar[2]/= temp;
	cout << iar[0] << '/' << iar[2];
	return 0;
}
