// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    int calculation, minutes, hours, days, weeks, minutes_remaining;
    cout<<"Enter a number of minutes: ";
    cin>> minutes;

    weeks = minutes/(7*24*60);
    days = (minutes%(7*24*60))/(60*24);
    hours =((minutes%(7*24*60))%(60*24))/60;
    calculation = (((minutes%(7*24*60))%(60*24))%60);
    

    
    
    cout<<"This represents: " <<weeks<<" weeks," << days<<" days, "<<hours <<" hours, "<<calculation<<" minutes";
    



    

    return 0;
}