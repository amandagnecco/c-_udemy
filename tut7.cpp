#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int randNum = rand() % 100;
    int i = 1;
    while (i != randNum){
        i += 1;
    }
    cout << "The Random number is: " << i << endl;
    
    return 0;
}