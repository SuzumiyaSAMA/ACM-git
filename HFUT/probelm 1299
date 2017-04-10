#include <iostream>
#include <vector>
using namespace std;
int main(void) {
	vector<char> icha;
	char ch = NULL;
	while((ch = getchar()) && (ch != EOF)){
		if (isalpha(ch))
			icha.push_back(ch);
		else {
			for (auto iter = icha.end()-1; iter >= icha.begin(); iter--)
				cout << *iter;
			cout << ch;
			//for(int count = 0; icha.size(); count++)
			//	icha.erase(icha.begin());
			icha.clear();
			//icha.pop_back();
		}
	}
	return 0;
}
