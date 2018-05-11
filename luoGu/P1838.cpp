#include <iostream>
using namespace std;
int matrix[9] = {-1};
int main(int argc, const char * argv[]) {
	for(int &mark: matrix)
		mark = -1;
	bool flag = true;
	int result = -1;
	string num;
	cin >> num;
	for(char n: num){
		if(flag)
			matrix[n-'0'-1] = 1;
		else
			matrix[n-'0'-1] = 0;
		flag = !flag;
	}
	if(matrix[0] == matrix[4] && matrix[0] == matrix[8])
		result = matrix[0];
	else if(matrix[2] == matrix[4] && matrix[2] == matrix[6])
		result = matrix[2];
	else if(matrix[3] == matrix[4] && matrix[3] == matrix[5])
		result = matrix[3];
	else if(matrix[1] == matrix[4] && matrix[1] == matrix[7])
		result = matrix[1];
	else if(matrix[0] == matrix[1] && matrix[0] == matrix[2])
		result = matrix[0];
	else if(matrix[0] == matrix[3] && matrix[0] == matrix[6])
		result = matrix[0];
	else if(matrix[2] == matrix[5] && matrix[2] == matrix[8])
		result = matrix[2];
	else if(matrix[6] == matrix[7] && matrix[6] == matrix[8])
		result = matrix[6];
	if(result == 1)
		cout << "xiaoa wins." << endl;
	else if(result == 0)
		cout << "uim wins." << endl;
	else
		cout << "drew." << endl;
	return 0;
}
