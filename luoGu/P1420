#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	int num = 0, length = 0, result = 0;
	cin >> num;
	vector<int> ivec(num, 0);					//use num to initial ivec
	for(int count = 0; count < num; count++)
		cin >> ivec[count];						//get numbers
	for (vector<int>::iterator it = ivec.begin()+1; it < ivec.end(); it++){
		if(*it == *(it-1)+1)					//if it is the right number
			length++;
		else
			length = 0;	
		if(length > result)
			result = length;
	}
	cout << result+1 << endl;
	return 0;
}
