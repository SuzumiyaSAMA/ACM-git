#include <iostream>
using namespace std;
int s = -1, x = -1;
int main(int argc, const char * argv[]) {
	cin >> s >> x;
	double speed = 7, distance = 0;
	while(distance < (s-x)){
		distance += speed;
		speed *= 0.98;
	}
	if((speed+distance) <= (s+x))
		cout << "y" << endl;
	else
		cout << "n" << endl;
	return 0;
}
