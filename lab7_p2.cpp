/*This program inputs temperatures for consecutive days and calls a function that will return the 
highest temperature and a function that will return the lowest temperature and a function that will 
return the average temperature.*/
#include <iostream>

using namespace std;

double calculateAverage(double temperatures[], int count) {
    double sum = 0.0;
    for (int i = 0; i < count; i++) {
        sum += temperatures[i];
    }
    return sum / count;
}


double findHighest(double temperatures[], int count) {
    double highest = temperatures[0]; 
    for (int i = 1; i < count; i++) {
        if (temperatures[i] > highest) {
            highest = temperatures[i];
        }
    }
    return highest;
}


double findLowest(double temperatures[], int count) {
    double lowest = temperatures[0];  
    for (int i = 1; i < count; i++) {
        if (temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
    }
    return lowest;
}

int main() {
    int numTemperatures;
    cout << "Please input the number of temperatures to be read\n";
    cin >> numTemperatures;

    double temperatures[numTemperatures]; 

    for (int i = 0; i < numTemperatures; ++i) {
        cout << "Input temperature " << i + 1 << ": ";
        cin >> temperatures[i];
    }

    double average = calculateAverage(temperatures, numTemperatures);
    double highest = findHighest(temperatures, numTemperatures);
    double lowest = findLowest(temperatures, numTemperatures);

    cout << "The average temperature is " << average << endl;
    cout << "The highest temperature is " << highest << endl;
    cout << "The lowest temperature is " << lowest << endl;

    return 0;
}
