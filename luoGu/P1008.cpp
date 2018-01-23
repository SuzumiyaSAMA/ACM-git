#include <iostream>
#include <algorithm>
using namespace std;

bool check(int num){
	int num2 = num*2, num3 = num*3;
	int ar[9] = {-1};
	for(int count = 0; count < 3; count++){
		ar[count] = num%10;
		num /= 10;
	}
	for(int count = 3; count < 6; count++){
		ar[count] = num2%10;
		num2 /= 10;
	}
	for(int count = 6; count < 9; count++){
		ar[count] = num3%10;
		num3 /= 10;
	}
	sort(begin(ar), end(ar));
	for(int count = 0; count < 8; count++)
		if((ar[count] != ar[count+1]-1) || ar[count]==0)
			return false;
	return true;
}

int main(int argc, const char * argv[]) {
	for (int a = 1; a <= 9; a++){
		for (int b = 1; b <= 9; b++){
			for (int c = 1; c <= 9; c++){
				int num = a*100 + b*10 + c;
				if(num*3 >= 1000)
					continue;
				if(check(num))
					cout << num << " " << num*2 << " " << num*3 << endl;
			}
		}
	}
	return 0;
}
