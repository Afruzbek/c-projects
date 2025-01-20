//This program reads from the user some text in a string and then prints the even and odd position characters seperately.
#include <iostream>
using namespace std;

int main() {
    char str[41], even[21], odd[21];
    char *p, *p_start, *e = even, *o = odd;

 
    cout << "Enter a string (40 characters maximum): ";
    cin >> str;

    p = str;
    p_start = str;

    for (; *p != '\0'; p++) {
      
        if ((p - p_start) % 2 == 0) {
            *e = *p; 
            e++;
        } else {
            *o = *p;
            o++;
        }
    }

    *e = '\0';
    *o = '\0';

    cout << "The even string is: " << even << endl;
    cout << "The odd string is: " << odd << endl;

    return 0;
}
