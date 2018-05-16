#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
	int N = -1, left = 1, right = 1;
	bool direction = true;
	cin >> N;
	for(int count = 1; count < N; count++){
		if(left == 1 && direction == true){
			direction = !direction;
			right += 1;
		}
		else if(right == 1 && direction == false){
			direction = !direction;
			left += 1;
		}
		else if(direction){
			left -= 1;
			right += 1;
		}
		else{
			left += 1;
			right -= 1;
		}
	}
	cout << left << "/" << right << endl;
	return 0;
}
