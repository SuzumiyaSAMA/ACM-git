#include <iostream>
#include <vector>
using namespace std;

int k = 0;

bool Check(int INPUT){
	int iar[5] = {0};
	iar[0] = INPUT/10000%10;
	iar[1] = INPUT/1000%10;
	iar[2] = INPUT/100%10;
	iar[3] = INPUT/10%10;
	iar[4] = INPUT%10;								//get all place of number
	int num1 = iar[0]*100 + iar[1]*10 + iar[2];
	int num2 = iar[1]*100 + iar[2]*10 + iar[3];
	int num3 = iar[2]*100 + iar[3]*10 + iar[4];		//get 3 target number
	if(!(num1%k) && !(num2%k) && !(num3%k))			//volidate
		return true;
	return false;
}

int main(int argc, const char * argv[]) {
	bool flag = true;
	cin >> k;
	for(int count = 10000; count < 30001; count++){
		if(Check(count)){
			cout << count << endl;
			flag = false;							//there is an answer.
		}
	}
	if(flag)
		cout << "No" << endl;
	return 0;
}
