#include <iostream>
#include <algorithm>
using namespace std;
struct node {
	int height;
	int power;
};

bool NodeCompareLess(node node1, node node2){
	if(node1.power < node2.power)
		return true;
	else
		return false;
}

node nodes[5000];
int n = -1, s = -1, a = -1, b = -1, result = 0, powerSum = 0;

int main(int argc, const char * argv[]) {
	cin >> n >> s >> a >> b;
	for(int count = 0; count < n; count++){
		cin >> nodes[count].height >> nodes[count].power;
	}
	sort(nodes, nodes+n, NodeCompareLess);
	for(int count = 0; count < n; count++){
		if(powerSum > s)
			break;
		if(nodes[count].height <= (a+b)){
			powerSum += nodes[count].power;
			result++;
		}
	}
	if(result <= 0)
		cout << "0" << endl;
	else
		cout << result-1 << endl;
	return 0;
}
