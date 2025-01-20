/*This program asks the user to inter an integer n, followed by a series of n numbers and then prints the average of n numbers*/
#include <iostream>
#include <cstdlib> 
using namespace std;
int main() {
    int n;
    int* array;
    float sum = 0.0;
    cout << "Enter an integer: ";
    cin >> n;

    array = (int*)malloc(n * sizeof(int));
    if (array == NULL) { 
        cerr << "Memory allocation failed." << endl;
        return 1; 
    }

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        sum += array[i];
    }

    float average = sum / n;
    cout << "The average is: " << average << endl;

    free(array);

    return 0;
}
