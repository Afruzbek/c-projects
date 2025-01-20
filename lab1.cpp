// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    
    int weeks, days, hours, minutes, total;
    
    
    std::cout<<"Enter the number of weeks: ";
    std::cin>> weeks;
    std::cout<<"Enter the number of days: ";
    std::cin>> days;
    std::cout<<"Enter the number of hours: ";
    std::cin>> hours;
    std::cout<<"Enter the number of minutes: ";
    std::cin>> minutes;
    
    total = ((((weeks*7)+days)*24+hours)*60+minutes);
    
    std::cout <<"The total number of minutes is: " <<total ;

    return 0;
}