// This program performs a survey tally on beverages
#include <iostream>
using namespace std;

int main(void) {
    
    int coffe = 0, tea = 0, coke = 0, orange = 0, person=0, ch ;
    cout << "Please input the favourite bevarage of person #" << person << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program "<< endl;
    cin >> ch;
    while (ch != -1){
        person = person + 1;
        if (ch == 1){
            coffe = coffe + 1;
        }
        if (ch == 2){
            tea = tea + 1;
        }
        if (ch == 3){
            coke = coke +1;
        }
        if (ch == 4){
            orange = orange +1;
        }
        cin >> ch;
    }
    
    
    cout << "Total number of people surveyed is " << person << ". The results are as follows: " <<endl;
    cout << "Beverage                   Number of votes "<<endl;
    cout << "**************************************************"<<endl;
    cout << "Coffe:                       " << coffe << endl ;
    cout << "Tea:                         " << tea << endl;
    cout << "Coke:                        " << coke << endl;
    cout << "Orange juice:                " << orange;
    return 0;
}
