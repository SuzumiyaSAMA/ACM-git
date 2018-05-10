#include <iostream>
#include <algorithm>
using namespace std;
int N = -1;
unsigned long long result = 1;
int ar[50];

int main(int argc, const char * argv[]) {
	cin >> N;
	for(int count = 0; count < N; count++)
		cin >> ar[count];
    sort(ar, ar+N);
	for(int count = 0; count < N; count++){
			result *= (ar[count]-count);
            result = result%1000000007;
	}
	cout << result << endl;
	return 0;
}
