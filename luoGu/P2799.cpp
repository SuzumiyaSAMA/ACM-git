#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	string S = "";
	cin >> S;
	while(S.length() > 1){
		if((S.length() == 0) || (S.length()%2 != 0)){
			cout << S.length() << endl;
			return 0;
		}
		auto half = S.length()/2;
		bool flag = true;
		for(int count = 0; count < half; count++){
			if(S[count] != S[S.length()-count-1]){
				flag = false;
				break;
			}
		}
		if(flag)
			S.resize(half);
		else
			break;
	}
	cout << S.length() << endl;
	return 0;
}
