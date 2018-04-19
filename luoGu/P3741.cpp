#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	int n = -1, result = 0;
	string s = "";
	cin >> n >> s;
	if(n == 1){
		cout << 0 << endl;
		return 0;
	}
	
	bool mark[100] = {false};
	for(int count = 0; count < n-1; count++){		//find all 'VK' in s
		if(s[count] == 'V' && s[count+1] == 'K'){
			result++;
			mark[count] = true;
			mark[count+1] = true;
		}
	}

	for(int count = 0, num = 0; count < n; count++){
		if(mark[count]) {
			num = 0;
			continue;
		}
		num++;
		if(num == 2 && !(s[count-1] == 'K' && s[count] == 'V')){	//if there is two character
			result++;												//and they can be changed
			break;													//into 'VK'
		}
		else if(num > 2) {											//every three space can be
			result++;												//changed into 'VK'
			break;
		}
	}
	cout << result << endl;
	return 0;
}
