
    // This program computes the area and perimeter of a right triangle.
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int aleg, bleg, area, perimeter;
    
    cout << "Enter the value of leg a: ";
    cin >> aleg;
    cout << "Enter the value of leg b: ";
    cin >> bleg;
    
    area = aleg * bleg * 1/2;
    perimeter = aleg + bleg + sqrt(aleg*aleg +bleg*bleg);
    
    cout << "The area of the triangle is " << area << endl;
    cout << "The perimeter of the triangle is " << perimeter;


    return 0;
}