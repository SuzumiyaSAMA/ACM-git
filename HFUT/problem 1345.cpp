#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool CheakPrimerNumber(int INPUT){
	int num =  sqrt(INPUT);
	for (int count = 2; count <= num; count++)
		if (!(INPUT%count)) return false;
	return true;
}
int main(void) {
    int TestTime = 0;
    cin >> TestTime;
    while(TestTime--){
        int n = 0, m = 0, a = 0, b = 0;
        bool direction = true;
        vector<int> ivec;
        cin >> n >> m >> a >> b;
        if (m == a)
          cout << b << endl;
        else{
          for (int count = 1; count <= n; count++)
            ivec.push_back(count);
          auto iter = ivec.begin();
          while(*iter != a && iter++ < ivec.end());		//Locate iter to a;
          while(*iter != m){
            if (CheakPrimerNumber(b++))	direction = !direction;
            if(direction)
              if(iter >= ivec.end()-1)	iter = ivec.begin();
              else						iter++;
            else
              if(iter <= ivec.begin())	iter = ivec.end()-1;
              else						iter--;
          }
          if (CheakPrimerNumber(b))	cout << "duang" << endl;
          else						cout << b << endl;
        }
    }
    return 0;
}
