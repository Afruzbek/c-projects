/* This program asks the user to enter an integer n and accepts command line arguments*/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;

    for (int i = 1; i < argc; i++) {
        if (strlen(argv[i]) >= n) {
            cout << argv[i] << " has at least " << n << " characters" << endl;
        }
    }

    return 0;
}
