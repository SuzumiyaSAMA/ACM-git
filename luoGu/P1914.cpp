#include <iostream>
#include <vector>
using namespace std;
int main (void){
	int num = 0;
	vector<char> chs;
	cin >> num;
	num = num%26;
	char ch;
	while(cin >> ch)
		chs.push_back(ch);
	for(int ch: chs){
		ch += num;
		if(ch > 'z')
			ch -= 26;
		cout << (char)ch;
	}
	cout << endl;
	return 0;
}
