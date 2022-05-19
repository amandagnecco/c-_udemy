#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main() {

    cout << "abs(-10) = " << abs(-10) << endl;//absolute value
    cout << "max(5, 4) = " << max(5, 4) << endl;//maximum value of the two
    cout << "min(5, 4) = " << min(5, 4) << endl;//minimum value of the two
    cout << "ceil(10.45) = " << ceil(10.45) << endl;//round up
    cout << "floor(10.45) = " << floor(10.45) << endl;//round down
    cout << "round(10.45) = " << round(10.45) << endl;//round up or down depending on the decimal value
    cout << "pow(2, 3) = " << pow(2, 3) << endl;//power of
    cout << "sqrt(100) = " << sqrt(100) << endl;//square root
    cout << "cbrt(1000) = " << cbrt(1000) << endl;// cubic root
    cout << "exp(1) = " << exp(1) << endl;// e ^ 1
    cout << "exp2(1) = " << exp2(1) << endl;// 2 ^x
    cout << "log(20.079) = " << log(20.079) << endl;// e * e * e ~= 20
    cout << "log2(8) = " << log2(8) << endl;// 2 * 2 * 2 = 8
    
    srand(time(NULL));
    int secretNum = rand() % 11; //generates random numbers from lower than 11
    cout << "Secret Number: " << secretNum << endl;

    return 0;
}