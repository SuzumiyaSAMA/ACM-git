#include <iostream>
#include <algorithm>
using namespace std;
int ar[10000000];
int main(int argc, const char * argv[]) {
	int N = -1;
	cin >> N;
	for(int count = 0; count < N; count++)
		cin >> ar[count];
	sort(ar, ar+N);
	int num = 0;
	for(int count = 0; count < N-1; count++){
		if(ar[count] == ar[count+1])
			num++;
		else{
			if((num%2) == 0){
				cout << ar[count];
				break;
			}
			num = 0;
		}
	}
	return 0;
}
