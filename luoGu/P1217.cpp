#include <iostream>
#include <cmath>
using namespace std;
int palindromes[100000];

bool isPrime2(int n){
	if((n == 2) || (n == 3))
		return true;
	if((n == 1) || ((n & 1) == 0) || ((n % 3) ==0))
		return false;
	int k = (int)sqrt(n);
	int step = 4;
	for(int i = 5; i <= k; i += step)
	{
		if(n % i == 0)
			return false;
		step = 6 - step;
	}
	return true;
}
void generate(){
	int d1 = 0, d2 = 0, d3 = 0, d4 = 0, count = 0;
	for (d1 = 5; d1 <= 9; d1+=2){
		palindromes[count] = d1;
		count++;
	}
	for (d1 = 1; d1 <= 9; d1+=2){
		palindromes[count] = d1*10 + d1;
		count++;
	}
	for (d1 = 1; d1 <= 9; d1+=2) {
		for (d2 = 0; d2 <= 9; d2++) {
			palindromes[count] = 100*d1 + 10*d2 + d1;
			count++;
		}
	}
	for (d1 = 1; d1 <= 9; d1+=2) {
		for (d2 = 0; d2 <= 9; d2++) {
			palindromes[count] = 1000*d1 + 100*d2 +10*d2 + d1;
			count++;
		}
	}
	for (d1 = 1; d1 <= 9; d1+=2) {
		for (d2 = 0; d2 <= 9; d2++) {
			for (d3 = 0; d3 <= 9; d3++) {
				palindromes[count] = 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;
				count++;
			}
		}
	}
	for (d1 = 1; d1 <= 9; d1+=2) {
		for (d2 = 0; d2 <= 9; d2++) {
			for (d3 = 0; d3 <= 9; d3++) {
				palindromes[count] = 100000*d1 + 10000*d2 +1000*d3 + 100*d3 +10*d2 + d1;
				count++;
			}
		}
	}
	for (d1 = 1; d1 <= 9; d1+=2) {
		for (d2 = 0; d2 <= 9; d2++) {
			for (d3 = 0; d3 <= 9; d3++) {
				for (d4 = 0; d4 <= 9; d4++) {
					palindromes[count] = 1000000*d1 + 100000*d2 + 10000*d3 + 1000*d4 + 100*d3 + 10*d2 + d1;
					count++;
				}
			}
		}
	}
	for (d1 = 1; d1 <= 9; d1+=2) {
		for (d2 = 0; d2 <= 9; d2++) {
			for (d3 = 0; d3 <= 9; d3++) {
				for (d4 = 0; d4 <= 9; d4++) {
					palindromes[count] = 10000000*d1 + 1000000*d2 + 100000*d3 + 10000*d4 + 1000*d4+ 100*d3 + 10*d2 + d1;
					count++;
				}
			}
		}
	}

}
int main(int argc, const char * argv[]) {
	int a = -1, b = -1;
	cin >> a >> b;
	generate();
	for(int num: palindromes)
		if((num != 0) && (num>=a) && (num<= b) && isPrime2(num))
			cout << num << endl;
	return 0;
}
