#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	double K = 0, N = 1, Sn = 0;
	cin >> K;
	while(Sn <= K){
		double temp = 1/N;
		Sn += temp;
		N++;
	}
	cout << --N << endl;
	return 0;
}
