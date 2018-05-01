#include <bits/stdc++.h>
using namespace std;
vector<int> factor;

bool check (int num){
	bool result = true;
	int end = num/2, begin = -1;
	if(!factor.empty()){
		for(int ifac: factor){
			if(num % ifac == 0){
				result = false;
				break;
			}
		}
		begin = factor.back();
	}
	else
		begin = 2;
	for(int count = begin; count <= end; count += 2){
		if(count > end || result == false){
			break;
		}
		if((num % count) == 0){
			result = false;
			break;
		}
	}
	return result;
}

int main(int argc, const char * argv[]) {
	int N = -1, M = -1;
	cin >> M >> N;
	time_t a = clock();
	int count = 0, num = 2, line = 0;
	while(count < N){
		if(check(num)){
			factor.push_back(num);
			if(count > M-1){
				if(line % 10 == 0)
					cout << endl;
				else
					cout << " ";
			}
			count++;
			if(count > M-1){
				cout << num;
				line++;
			}
		}
		num++;
	}
	return 0;
}
