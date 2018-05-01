#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main() {
    vector<string> svec;
    string word;
    while (cin >> word)
        svec.push_back(word);
    for (vector<string>::iterator its = svec.end()-1; its != svec.begin(); its--){
        cout << *its << " ";
    }
    cout << *svec.begin();
    return 0;
}
