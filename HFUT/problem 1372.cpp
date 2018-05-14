#include <iostream>
using namespace std;
double bitch(double num){
	int a = num*100;
	if((a%10)!=0)
		a = a/10*10+10;
	return (double)a/100;
}

int main(int argc, const char * argv[]) {
	int T = -1;
	cin >> T;
	double result[100];
	for(int TestTime = 0; TestTime < T; TestTime++){
		int n = -1;
		double total = 0, m = -1;
		cin >> n >> m;
		for(int count = 0; count < n; count++){
			double price = -1;
			int number = -1;
			cin >> price >> number;
			price += 1e-16;				//because of the mistake of the double/float
			price *= number;
			total += price;
		}
		total += 1e-8;
		total = bitch(total);
		if(total > m){
			result[TestTime] = -1;
			//printf("Case %d: -1\n", TestTime+1);
		}
		else{
			result[TestTime] = m-total;
			//printf("Case %d: %.2lf\n", TestTime+1, m-total);
		}
	}
	for(int count = 0; count < T; count++){
		if(result[count] == -1)
			printf("Case %d: -1\n", count+1);
		else
			printf("Case %d: %.2lf\n", count+1, result[count]);
	}
	return 0;
}
