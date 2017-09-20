#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	long INPUT = 0;
	vector<long> numbers;
	while (cin >> INPUT)
		numbers.push_back(INPUT);
	auto it = numbers.end()-1;
	while (*it == 0) it--;
	while (it > numbers.begin()){
		cout << *it << " ";
		it--;
	}
	cout << *it << endl;
	return 0;
}
