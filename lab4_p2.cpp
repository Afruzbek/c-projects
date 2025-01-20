//This program asks the user to enter a sentence ended by a period, a question mark, or an exclamation mark and prints out the number of space characters (spaces, new lines, tabs) in that sentence. 
#include <iostream>
using namespace std;

int main(void) {
    char ch;
    int line = 0, tabs = 0, space = 0;
    cout << "Enter a sentence (end by . or ? or !):  ";
    ch = getchar();
    while (ch != '.' && ch != '?' && ch != '!'){
        if (ch == ' '){
            space = space + 1;
        }
        if (ch == '\t'){
            tabs = tabs + 1;
        }
        if (ch == '\n'){
            line = line +1;
        }
        ch = getchar();
    }
    
    cout << "Number of space characters: " << space<< endl;
    cout << "Number of new line characters: " << line << endl;
    cout << "Number of tabs: " << tabs;

    return 0;
}