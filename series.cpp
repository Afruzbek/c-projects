#include <iostream>
using namespace std;

int main () {
    int num, res = 0; 
    cout << "Enter an integer number: ";
    cin >> num;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 1) {
            res += i * i;  
        } else {
            res -= i * i;  
        }
    }

    cout << "The value of the series is: "<< res << endl;
    return 0;
}