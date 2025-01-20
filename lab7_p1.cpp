// This program switches the values stored in three integer variables.
#include <iostream>
using namespace std;

void rotateLeft( int *a, int *b, int *c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
int main() {
    int i = 1, j = 2, k = 3;
    rotateLeft ( &i, &j, &k);
    cout << i << j << k <<endl;
    return 0;
}