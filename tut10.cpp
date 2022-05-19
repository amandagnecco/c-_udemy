#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> vecRandNums(2);
    vecRandNums[0] = 10;
    vecRandNums[1] = 20;

    vecRandNums.push_back(30);
    cout << "Vector size: " << vecRandNums.size() << endl;

    cout << "Last Index: " << vecRandNums[vecRandNums.size() - 1] << endl;

    vector<int>::iterator it;
    it = find(vecRandNums.begin(), vecRandNums.end(), 20);
    cout << *it << endl;

    string sSentence = "This is a random string";
    vector<string> vecsWords;
    stringstream ss(sSentence);
    string sIndivStr;
    char cSpace = ' ';

    while (getline(ss, sIndivStr, cSpace)){ // StringStream, String Retrieved, Separator
        vecsWords.push_back(sIndivStr);
    }

    for(int i = 0; i < vecsWords.size(); ++i){
        cout << vecsWords[i] << endl;
    }
    







    return 0;
}
