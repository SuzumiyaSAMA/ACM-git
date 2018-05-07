#include <iostream>
using namespace std;
void way1(){										//an idiot method
	bool light[10000000000000] = {false};
	int N = -1;
	bool flag = false;
	cin >> N;
	for(int count = 1; count <= N; count++){
		for(int time = 1; time*count <= N; time++){
			light[time*count] = !light[time*count];
		}
	}
	for(int count = 0; count <= N; count++){
		if(light[count]){
			if(!flag){
				cout << count;
				flag = true;
			}
			else
				cout << " " << count;
		}
	}
}
int main(int argc, const char * argv[]) {
	int N = -1;
	bool flag = false;
	cin >>N;
	for(int count = 1; count*count <= N; count++){
		if(!flag){
			cout << count*count;
			flag = true;
		}
		else
			cout << " " << count*count;
	}
	return 0;
}
