#include <cstdlib>
#include <iostream>
#include <string> 
using namespace std;

int main() {
    string sAge;
    cout << "Enter age: ";
    cin >> sAge;
    int iAge = stoi(sAge);

    if (iAge < 5){
        cout << "Too young for school\n";
    } else if (iAge == 5){
        cout << "Go to kindergarten\n";
    } else if ((iAge >= 6) && (iAge <= 17)){
        printf("Go to grade %d\n", (iAge-5));
    } else if (iAge > 17){
        cout << "Go to College\n";
    }
    
    return 0;
}