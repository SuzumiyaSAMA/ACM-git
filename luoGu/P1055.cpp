#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	int toCheak = 0;
	long result = 0;
	char INPUT;
	vector<int> numbers;
	for (int count = 0; count < 12; count++){
		cin >> INPUT;
		if(INPUT == '-')
			continue;
		numbers.push_back(INPUT-'0');
	}
	cin >> INPUT;
	if(INPUT == 'X')
		toCheak = 10;
	else
		toCheak = INPUT-'0';
	for(int count = 1; count <= 9; count++)
		result += count*numbers[count-1];
	result = result % 11;
	if(result == toCheak)
		cout << "Right" << endl;
	else{
		cout << numbers[0] << "-" <<
		numbers[1] <<
		numbers[2] <<
		numbers[3] << "-" <<
		numbers[4] <<
		numbers[5] <<
		numbers[6] <<
		numbers[7] <<
		numbers[8] << "-";
		if(result == 10)
			cout << "X" << endl;
		else
			cout << result << endl;
	}
	return 0;
}
