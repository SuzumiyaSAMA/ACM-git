#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
	double target = 0;
	cin >> target;
	double result = log((2-target+target*0.98)/2)/log(0.98);
	result += 1;
	cout << (int)result << endl;
	return 0;
}
