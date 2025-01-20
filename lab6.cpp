#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of your square matrix: ";
    cin >> size;

    srand(time(0));

    int matrix[size][size], prime[size * size], count = 0;

    cout << "The randomly generated matrix is:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 90 + 10;
            cout << matrix[i][j] << "\t";

            // Prime check directly in the loop
            int num = matrix[i][j], isPrime = (num > 1);
            for (int k = 2; k * k <= num && isPrime; k++)
                if (num % k == 0) isPrime = 0;
            if (isPrime) prime[count++] = num;
        }
        cout << endl;
    }

    cout << "\nFound prime numbers: ";
    if (count == 0) {
        cout << "None";
    } else {
        for (int i = 0; i < count; i++) {
            if (i > 0) cout << ", ";
            cout << prime[i];
        }
    }
    cout << "\nThere are " << count << " prime numbers detected.\n";

    return 0;
}