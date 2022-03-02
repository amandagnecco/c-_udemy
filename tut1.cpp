#include <cstdlib> //functions for convertin from one datatype to another, gen random num, math ops
#include <iostream> //recieve input and provite output to user
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Hello World" << endl;
    
    if (argc != 1) {
        cout << "You entered " << argc << " arguments\n";
        for (int i = 0; i < argc; ++i) {
            cout << argv[i] << "\n";
        }
    }
    return 0;
}
