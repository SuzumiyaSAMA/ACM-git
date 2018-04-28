#include <iostream>
using namespace std;
bool check(int num){
	bool result = true;
	int end = num/2;
	for(int count = 2; count <= end; count++){
		if(num % count == 0){
			result = false;
			break;
		}
	}
	return result;
}

int main(int argc, const char * argv[]) {
	int n = -1, k = -1;
	bool ans = false;
	cin >> n >> k;
	for(int count = 2; count+k <= n; count++){
		if(check(count) && check(count+k)){
			ans = true;
			cout << count << " " << count+k << endl;
		}
	}
	if(!ans)
		cout << "empty" << endl;
	return 0;
}
