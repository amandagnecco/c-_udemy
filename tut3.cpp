#include <cstdlib>
#include <iostream>
#include <string> 
using namespace std;

int main(){
    string sQuestion ("Enter Number 1: ");
    string sNum1, sNum2;
    cout << sQuestion;
    cin >> sNum1;
    cout << "enter Number 2: ";
    cin >> sNum2;
    int nNum1 = stoi(sNum1);
    int nNum2 = stoi(sNum2);

    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));

    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

    
    return 0;
}