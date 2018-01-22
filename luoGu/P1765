#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(int argc, const char * argv[]) {
	int result = 0;
	string INPUT;
	map<char, int> cim;
	cim[' '] = 1; cim['a'] = 1; cim['b'] = 2; cim['c'] = 3;
	cim['d'] = 1; cim['e'] = 2; cim ['f'] = 3;
	cim['g'] = 1; cim['h'] = 2; cim ['i'] = 3;
	cim['j'] = 1; cim['k'] = 2; cim ['l'] = 3;
	cim['m'] = 1; cim['n'] = 2; cim ['o'] = 3;
	cim['p'] = 1; cim['q'] = 2; cim ['r'] = 3; cim['s'] = 4;
	cim['t'] = 1; cim['u'] = 2; cim ['v'] = 3;
	cim['w'] = 1; cim['x'] = 2; cim ['y'] = 3; cim['z'] = 4;	//make the map from char to int
	getline(cin, INPUT);										//use getline but not cin. Or you can only get one word
	for(int count = 0; count < INPUT.size(); count++)
		result += cim[INPUT[count]];							//calculate the result
	cout << result << endl;
	return 0;
}
