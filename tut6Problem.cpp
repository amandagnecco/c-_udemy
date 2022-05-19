#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    for(int i = 0; i <= 20; ++i){
        string isEven = ((i % 2) == 0) ? "Even" : "Odd";
        cout << i << " is " << isEven << endl;

    }

    return 0;
}

