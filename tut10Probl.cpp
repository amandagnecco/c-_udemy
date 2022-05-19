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
    double dbNum1 = 0, dbNum2 = 0;
    string sCalc = "";
    vector<string> vecsCalc;

    cout << "Enter calculation (Ex: 5 + 6): ";
    getline(cin, sCalc);
    stringstream ss(sCalc);
    string indivStr;
    char space = ' ';

    while(getline(ss, indivStr, space)){ 
        vecsCalc.push_back(indivStr);
    }

    dbNum1 = stod(vecsCalc[0]);
    dbNum2 = stod(vecsCalc[2]);
    string operation = vecsCalc[1];

    if (operation == "+"){
        printf("%.1f + %.1f =  %.1f\n", dbNum1, dbNum2, (dbNum1 + dbNum2));
    } else if (operation == "-"){
        printf("%.1f - %.1f =  %.1f\n", dbNum1, dbNum2, (dbNum1 - dbNum2));
    } else if (operation == "*"){
        printf("%.1f * %.1f =  %.1f\n", dbNum1, dbNum2, (dbNum1 * dbNum2));
    } else if (operation == "/"){
        printf("%.1f / %.1f =  %.1f\n", dbNum1, dbNum2, (dbNum1 / dbNum2));
    } else {
        cout << "Please enter +, -, * or /\n";
    }    



    return 0;
}