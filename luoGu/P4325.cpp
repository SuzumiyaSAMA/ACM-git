#include <iostream>
#include <set>
using namespace std;
int main(int argc, const char * argv[]) {
	int num;
	set<int> OUTPUT;
	for(int count = 0; count < 10; count++){
		cin >> num;
		OUTPUT.insert(num%42);
	}
	cout << OUTPUT.size() << endl;
	return 0;
}
