#include <cstdlib>
#include <iostream>
#include <string> 
using namespace std;

int main() {
    //Is the birthbay important
    //if bd == 1~18; 21; 50; >65
    string sAge = "0";
    cout << "Enter your age: ";
    cin >> sAge;
    int nAge = stoi(sAge);
    if ((nAge >= 1) && (nAge <= 18)){
        cout<< "This is an important birthday\n";
    } else if ((nAge == 21) || (nAge == 50)){
        cout<< "This is an important birthday\n";
    } else if (nAge >= 65){
        cout<< "This is an important birthday\n";
    } else {
        cout<< "This is not an important birthday\n";
    }

    int ageToVote = 16;
    bool canIVote = (ageToVote >= 18) ? true : false;
    cout.setf(ios::boolalpha);
    cout << "Can I vote? " << canIVote << endl;

    return 0;
}