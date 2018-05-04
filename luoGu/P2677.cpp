#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int N = -1, B = -1, height = 0, result = 0xfffffff;
vector<int> ivec;

void dfs(int position){
	height += ivec[position];
	if((position > N-1) || ((height >= B))){
		if((height >= B) && (height < result))
			result = height;
		height = 0;
		return;
	}
	for(int count = 1; count+position < N; count++){
		dfs(position+count);
	}
}

int main(int argc, const char * argv[]) {
	cin >> N >> B;
	for(int count = 0; count < N; count++){
		int num = -1;
		cin >> num;
		ivec.push_back(num);
	}
	sort(ivec.begin(), ivec.end(), less<int>());
	for(int count = 0; count < N; count++){
		dfs(count);
	}
	cout << result-B << endl;
	return 0;
}
