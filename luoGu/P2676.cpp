#include <iostream>
#include <queue>
using namespace std;
int main(int argc, const char * argv[]) {
	int N = -1, B = -1, result = 0;
	priority_queue<int> H;
	cin >> N >> B;
	for(int count = 0; count < N; count++){
		int num = -1;
		cin >> num;
		H.push(num);
	}										//get input data
	
	int height = 0;
	while(height < B){
		height += H.top();
		result++;
		H.pop();
	}										//calculate result
	
	cout << result << endl;
	return 0;
}
