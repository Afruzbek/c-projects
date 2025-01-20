//This program calculates the square root of a number.
#include <iostream> 
#include <math.h>
using namespace std; 
  
int main() {
    float number, guess;
    cout << "Enter a number: ";
    cin >> number;
    
    guess = 1.0;
    
    while (fabs (guess * guess - number) >= 1e-5){ guess = (guess + number / guess)/2.0;}
    
    cout << "Estimated square root of "<< number <<": "<<guess << endl; 
    return 0;
}