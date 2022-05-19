#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
    int treeH;
    cout << "How tall is your tree? ";
    cin >> treeH;
    int spaces = treeH - 1;
    int hashes = 1;
    int stumpSpaces = treeH - 1;

    while (treeH != 0){
        for(int k = 0; k < spaces; ++k){
            cout << " ";
        }
        for(int l = 0; l < hashes; ++l){
            cout << "#";
        }
        cout << "\n";
        spaces -= 1;
        hashes += 2;
        treeH -= 1;
    }
    for (int m = 0; m < stumpSpaces; ++m){
        cout << " ";
    }
    cout << "#\n";
    
    return 0;
}