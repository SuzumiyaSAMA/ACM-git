#include <iostream>
using namespace std;
int matrix[10000][4] = {-1};
void way1(){
	short matrix[100000][100000];
	int n = -1;
	cin >> n;
	for(int count = 1; count <= n; count++){
		int a = -1, b = -1, g = -1, k = -1;
		cin >> a >> b >> g >> k;
		for(int countX = a; countX <= a+g; countX++){
			for(int countY = b; countY <= b+k; countY++){
				matrix[countX][countY] = count;
			}
		}
	}
	int x = -1, y = -1;
	cin >> x >> y;
	if(matrix[x][y] == 0)
		cout << "-1" << endl;
	else
		cout << matrix[x][y] << endl;
}
int main(int argc, const char * argv[]) {
	for(int countX = 0; countX < 10000; countX++){
		for(int countY = 0; countY < 4; countY++){
			matrix[countX][countY] = -1;
		}
	}
	int n = -1;
	cin >> n;
	for(int count = 1; count <= n; count++){
		int a = -1, b = -1, g = -1, k = -1;
		cin >> a >> b >> g >> k;
		matrix[count][0] = a;
		matrix[count][1] = b;
		matrix[count][2] = a+g;
		matrix[count][3] = b+k;
	}
	int x = -1, y = -1;
	bool flag = true;
	cin >> x >> y;
	for(int count = n; count > 0; count--){
		if((x >= matrix[count][0]) && (x <= matrix[count][2]) && (y >= matrix[count][1]) && (y <= matrix[count][3])){
			cout << count << endl;
			flag = false;
			break;
		}
	}
	if(flag)
		cout << "-1" << endl;
	return 0;
}
