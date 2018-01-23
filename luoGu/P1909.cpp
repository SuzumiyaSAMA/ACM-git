#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	int n = -1, money = -1, result = 0x7fffffff;
	int pnm[3][2] = {0};
	cin >> n;
	for(int count = 0; count < 3; count++)
		cin >> pnm[count][0] >> pnm[count][1];
	
	for(int count = 0; count < 3; count++){
		if((n%pnm[count][0]))							//if need to by more one
			money = (n/pnm[count][0]+1)*pnm[count][1];
		else
			money = n/pnm[count][0]*pnm[count][1];
		if(result > money)
			result = money;
	}
	
	cout << result << endl;
	return 0;
}
