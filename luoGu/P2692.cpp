#include <bits/stdc++.h>
using namespace std;

int main(int argc, const char * argv[]) {
	int N = -1, M = -1, B = -1, G = -1;
	cin >> N >> M >> B >> G;
	vector<bool> row(N, false);
	vector<bool> line(M, false);
	for(int count = 0; count < B; count++){
		int begin = -1, end = -1;
		cin >> begin >> end;
		begin--; end--;
		while(begin <= end){
			row[begin] = true;
			begin++;
		}
	}
	for(int count = 0; count < G; count++){
		int begin = -1, end = -1;
		cin >> begin >> end;
		begin--; end--;
		while(begin <= end){
			line[begin] = true;
			begin++;
		}
	}
	int rowNumber = 0, lineNumber = 0;
	for(int count = 0; count < N; count++)
		if(row[count]) rowNumber++;
	for(int count = 0; count < M; count++)
		if(line[count]) lineNumber++;
	cout << rowNumber * M + lineNumber * (N-rowNumber) << endl;
	return 0;
}
