// Thid program asks the user to enter a sentence ended by a period and prints out the number of times each character appears in the sentence, only for the characters that occur at least once.
#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch; 
    int charCount[26] = {0};
    
    cout << "Enter a sentence (end by . ): ";
    ch = getchar();
    while (ch != '.'){
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = tolower(ch); 
            charCount[ch - 'a']++; 
        }
        ch = getchar();
    }
    for (int i = 0; i < 26; i++) {
        if (charCount[i] > 0) { 
            cout << "Occurrences of '" << char(i + 'a') << "': " << charCount[i] << endl;
        }
    }
    return 0;
}