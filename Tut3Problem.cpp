#include <cstdlib>
#include <iostream>
#include <string> 
using namespace std;

int main(){
    string sMiles;
    double dMiles, dKm;

    cout << "Enter miles: ";
    cin >> sMiles;

    dMiles = stod(sMiles);
    dKm = dMiles * 1.60934;

    printf("%.f miles equals to %.4f kilometers\n", dMiles, dKm);

    return 0;
}