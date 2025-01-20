//Convert an integer to binary
#include <iostream>
using namespace std;

int main() {
    int num, fin, fin2, fin3, fin4, fin5;
    cout << "Enter a number between 0 and 31: ";
    cin >> num;
    fin = num % 2;
    fin2 = (num / 2)%2;
    fin3 = (num / 2 / 2) % 2;
    fin4 = (num / 2 / 2 / 2) % 2;
    fin5 =  (num / 2 / 2 / 2 / 2)% 2;
    cout << fin5<<fin4<<fin3<<fin2<<fin<<endl;

    return 0;
}