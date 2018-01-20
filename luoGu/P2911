#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	int s1 = 0, s2 = 0, s3 = 0, result = 0, length = 0;
	vector<int> ivec;
	cin >> s1 >> s2 >> s3;
	for(int count1 = 1; count1 <= s1; count1++)
		for(int count2  = 1; count2 <= s2; count2++)
			for(int count3  = 1; count3 <= s3; count3++)
				ivec.push_back(count1 + count2 + count3);			//get all sum result
	sort(ivec.begin(), ivec.end());									//sort it to judge the longest section
	vector<int>::iterator itl = ivec.begin(), itr = ivec.begin();
	while(itr < ivec.end()){
		while(*itr == *itl)											//get the section of one number
			itr++;
		if(length < itr-itl){										//if this is the longest one
			length = itr-itl;										//set the result to this number
			result = *itl;
		}
		itl = itr;													//go to next section
	}
	cout << result << endl;
	return 0;
}
