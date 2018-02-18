#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	int M = -1;
	string N;
	cin >> M >> N;
	cout << N[0] << '*' << M << '^' << N.size()-1;
	for(int count = 1; count < N.size(); count++){
		if(N[count] == '0')
			continue;
		cout << '+' << N[count] << '*' << M << '^' << N.size()-count-1;
	}
	return 0;
}
