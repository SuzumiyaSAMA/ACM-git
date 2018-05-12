#include <iostream>
using namespace std;
int resultCount = 0;
int resultSquare[10000][10];

int main(int argc, const char * argv[]) {
	int n = -1;
	cin >> n;
	if((n > 30) || (n < 10)){
		cout << "0" << endl;
		return 0;
	}
	for(int num0 = 1; num0 <= 3; num0++)
		for(int num1 = 1; num1 <= 3; num1++)
			for(int num2 = 1; num2 <= 3; num2++)
				for(int num3 = 1; num3 <= 3; num3++)
					for(int num4 = 1; num4 <= 3; num4++)
						for(int num5 = 1; num5 <= 3; num5++)
							for(int num6 = 1; num6 <= 3; num6++)
								for(int num7 = 1; num7 <= 3; num7++)
									for(int num8 = 1; num8 <= 3; num8++)
										for(int num9 = 1; num9 <= 3; num9++){
											if((num0+num1+num2+num3+num4+num5+num6+num7+num8+num9) == n){
												resultSquare[resultCount][0] = num0;
												resultSquare[resultCount][1] = num1;
												resultSquare[resultCount][2] = num2;
												resultSquare[resultCount][3] = num3;
												resultSquare[resultCount][4] = num4;
												resultSquare[resultCount][5] = num5;
												resultSquare[resultCount][6] = num6;
												resultSquare[resultCount][7] = num7;
												resultSquare[resultCount][8] = num8;
												resultSquare[resultCount][9] = num9;
												resultCount++;
											}
										}
	cout << resultCount << endl;
	for(int countO = 0; countO < resultCount; countO++)
		for(int countI = 0; countI < 10; countI++){
			if(countI == 9)
				cout << resultSquare[countO][countI] << endl;
			else
				cout << resultSquare[countO][countI] << " ";
		}
	return 0;
}
