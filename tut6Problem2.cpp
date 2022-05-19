#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    float investment, interest, total;
    cout << "How much to invest: ";
    cin >> investment;
    total = investment;
    cout << "Interest rate: ";
    cin >> interest;
    interest = interest * .01;
    for(int i = 0; i < 10; ++i){
        total = total + investment + (total * interest);
    }
    printf("Investment after 10 years: %.2f\n", total);


    return 0;
}