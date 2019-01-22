#include <iostream>
#include <algorithm>
using namespace std;
int points[34];
int A = -1, B = -1, N = -1, result = 0;

void StupidPath(int start){
	if(points[start] == 7000) {
		result++;
		return;
	}
	else if(7000-points[start] < A) return;
	for(int count = start+1; count < 34; count++){
		if(points[count]-points[start] > B) break;
		if(points[count]-points[start] >= A)
			StupidPath(count);
	}
	return;
}

int main(int argc, const char * argv[]) {
	points[0]=0;
	points[1]=990;
	points[2]=1010;
	points[3]=1970;
	points[4]=2030;
	points[5]=2940;
	points[6]=3060;
	points[7]=3930;
	points[8]=4060;
	points[9]=4970;
	points[10]=5030;
	points[11]=5990;
	points[12]=6010;
	points[13]=7000;
	cin >> A >> B >> N;
	for(int count = 0; count < N; count++)
		cin >> points[count+14];
	sort(begin(points), end(points));
	StupidPath(20-N);
	cout << result << endl;
	return 0;
}
