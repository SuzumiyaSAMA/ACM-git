#include <iostream>
#include <vector>
using namespace std;
int main(int argc, const char * argv[]) {
	int length = 0, start = 0, end = 0, times = 0;
	cin >> length >> times;
	length++;
	vector<bool> road(length,true);
	while(times--){
		cin >> start >> end;
		for(int count = start; count <= end; count++)
			road[count] = false;
	}
	int result = 0;
	for(bool bo: road)
		if(bo)	result++;
	cout << result << endl;
	return 0;
}
