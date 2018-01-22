#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;
int main(int argc, const char * argv[]) {
	vector<int> team;
	vector<int> UFO;
	char ch;
	
	while(scanf("%c",&ch)){
		if(ch == '\n')
			break;
		UFO.push_back(ch-'A'+1);
	}
	while(scanf("%c",&ch)){
		if(ch == '\n')
			break;
		team.push_back(ch-'A'+1);
	}
	
	int resultUFO = 1;
	int resultTeam = 1;
	for(int num: UFO)
		resultUFO *= num;
	for(int num: team)
		resultTeam *= num;
	if((resultTeam%47) == (resultUFO%47))
		cout << "GO" << endl;
	else
		cout << "STAY" << endl;
	return 0;
}
