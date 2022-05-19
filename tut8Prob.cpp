#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;
    
    while (true){
        cout << "Guess the number: ";
        cin >> guess;
        if(guess > secretNum) cout << "Too big\n";
        if(guess < secretNum) cout << "Too small\n";
        if(guess == secretNum) break;
    }

    cout << "You guessed it!" << endl;

    return 0;
}