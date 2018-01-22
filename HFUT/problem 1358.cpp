#include <algorithm>
#include <iostream>
#include <cstdio>
using namespace std;

struct TimeNode {
	int a, c, delta;
	TimeNode(int A = 0, int C = 0){
		a = A;
		c = C;
		delta = a-c;
	}
	bool operator < (const TimeNode &rhs) const {
		return delta > rhs.delta;
	}
};
int main(void){
	TimeNode times[1005];
	int T = 0;
	cin >> T;
	while (T--){
		int n = 0, t = 0, a = 0, b = 0, c = 0, a_plus = 0, c_plus = 0;
		cin >> n;
		for (int count = 0; count < n; count++){
			cin >> a >> b >> c;
			times[count] = TimeNode(a,c);
			a_plus += a;
			c_plus += c;
		}
		cin >> t;
		if (c_plus > t){
			printf("Oh,my god!\n");
			continue;
		}
		sort(times, times+n);
		for (int count = 0; a_plus > t; count++){
			n--;
			a_plus -= times[count].delta;
		}
		cout << n << endl;
	}
	return 0;
}
