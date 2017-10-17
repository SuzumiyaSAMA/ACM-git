#include <iostream>
using namespace std;
int calculate (int num){
  if(num == 0) return 1;
	int result = 0;
	for (int temp = num/2; temp >= 0; temp--){
		result += calculate(temp);
	}
	return result;
}
int main(int argc, const char * argv[]) {
	int INPUT = 0;
	cin >> INPUT;
	int result = calculate(INPUT);
	cout << result << endl;
	return 0;
}
