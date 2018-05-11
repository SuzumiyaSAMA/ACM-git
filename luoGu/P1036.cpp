#include <iostream>
using namespace std;

int ar[20] = {-1};
int n = -1, k = -1, result = 0, num = 0;

bool check(int num){
	int end = num/2;
	for(int count = 2; count < end; count++){
		if((num%count) == 0){
			return false;
		}
	}
	return true;
}

void search(int level, int position){
	if(position > n)
		return;
	num += ar[position];
	if(level == k-1){
		if(check(num)){
			result++;
		}
		return;
	}
	for(int count = position+1; count < n; count++){
		search(level+1, count);
		num -= ar[count];
	}
}

int main(void){
	cin >> n >> k;
	for(int count = 0; count < n; count++)
		cin >> ar[count];
	for(int count = 0; count < n; count++){
		search(0, count);
		num -= ar[count];
	}
	cout << result << endl;
	return 0;
}
