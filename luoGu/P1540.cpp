#include <iostream>
using namespace std;
int ique[2000] = {-1};
int front = 0, back = 0, M = -1, N = -1, result = 0;

bool search(int num){
	for(int count = front; count < back; count++){
		if(ique[count] == num)
			return true;
	}
	return false;
}

int main(int argc, const char * argv[]) {
	cin >> M >> N;
	for(int &num: ique)
		num = -1;
	back = front+M;
	for(int count = 0; count < N; count++){
		int num = -1;
		cin  >> num;
		if(search(num))
			continue;
		else{
			ique[back] = num;
			back++;
			front++;
			result++;
		}
	}
	cout << result << endl;
	return 0;
}
