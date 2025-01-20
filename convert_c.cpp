// Convert an integer to expected base
#include <iostream>
using namespace std;

int main() {
    int num, fin, fin2, fin3, fin4, fin5, base;
    cout << "Enter a number between 0 and 31: ";
    cin >> num;
    cout << "Enter a base between 2 and 9: ";
    cin >> base;
    if (base == 2 ){
        fin = num % 2;
        fin2 = (num / 2)%2;
        fin3 = (num / 2 / 2) % 2;
        fin4 = (num / 2 / 2 / 2) % 2;
        fin5 =  (num / 2 / 2 / 2 / 2)% 2;
        cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;
    }
    if (base == 3){
        fin = num % 3;
        fin2 = (num / 3) % 3;
        fin3 = (num / 3 / 3) % 3;
        fin4 = (num / 3 / 3 / 3) % 3;
        fin5 = (num / 3 / 3 / 3 / 3) % 3;
        cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;
    }
    if (base == 4){
        fin = num % 4;
        fin2 = (num / 4) % 4;
        fin3 = (num / 4 / 4) % 4;
        fin4 = (num / 4 / 4 / 4) % 4;
        fin5 = (num / 4 / 4 / 4 / 4) % 4;
        cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;
    }
    if (base == 5){
        fin = num % 5;
        fin2 = (num / 5) % 5;
        fin3 = (num / 5 / 5) % 5;
        fin4 = (num / 5 / 5 / 5) % 5;
        fin5 = (num / 5 / 5 / 5 / 5) % 5;
        cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;
    }
    if (base == 6){
        fin = num % 6;
        fin2 = (num / 6) % 6;
        fin3 = (num / 6 / 6) % 6;
        fin4 = (num / 6 / 6 / 6) % 6;
        fin5 = (num / 6 / 6 / 6 / 6) % 6;
        cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;
    }
    if (base == 7){
        fin = num % 7;
        fin2 = (num / 7) % 7;
        fin3 = (num / 7 / 7) % 7;
        fin4 = (num / 7 / 7 / 7) % 7;
        fin5 = (num / 7 / 7 / 7 / 7) % 7;
        cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;
    }
    if (base == 8){
        fin = num % 8;
        fin2 = (num / 8) % 8;
        fin3 = (num / 8 / 8) % 8;
        fin4 = (num / 8 / 8 / 8) % 8;
        fin5 = (num / 8 / 8 / 8 / 8) % 8;
        cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;
    }
    if (base == 9){
        fin = num % 9;
        fin2 = (num / 9) % 9;
        fin3 = (num / 9 / 9) % 9;
        fin4 = (num / 9 / 9 / 9) % 9;
        fin5 = (num / 9 / 9 / 9 / 9) % 9;
        cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;
    }
    

    return 0;
}