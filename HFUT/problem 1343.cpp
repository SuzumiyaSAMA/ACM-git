#include<iostream>
using namespace std;
int main()
{
	int TestTime = 0;
	long long num = 0;
	cin >> TestTime;
	while(TestTime--){
		cin >> num;
		if (num <= 2)	cout << num << endl;
		else if (num%2)	cout << num*(num-1)*(num-2) << endl;
		else if (num%3)	cout << num*(num-1)*(num-3) << endl;
		else		cout << (num-1)*(num-2)*(num-3) << endl;
 	}
	return 0;
}
