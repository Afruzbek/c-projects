/*The program takes two user-input strings and either intersperses them or
concatenates them with asterisks based on a command-line argument, dynamically 
allocating memory for the resultant string and deallocating it before termination.*/
#include <iostream>
#include <cstring>

using namespace std;

char* intersperse(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLength = len1 + len2;
    char* result = new char[totalLength + 1];

    int index = 0, i = 0, j = 0;
    while (i < len1 && j < len2) {
        result[index++] = str1[i++];
        result[index++] = str2[j++];
    }
    while (i < len1) {
        result[index++] = str1[i++];
    }
    while (j < len2) {
        result[index++] = str2[j++];
    }
    result[index] = '\0';
    return result;
}

char* widen_stars(const char* str1, const char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLength = len1 * 2 + len2 * 2 - 1;
    char* result = new char[totalLength + 1];

    int index = 0;
    for (int i = 0; i < len1; i++) {
        result[index++] = str1[i];
        result[index++] = '*';
    }
    for (int i = 0; i < len2; i++) {
        result[index++] = str2[i];
        if (i < len2 - 1) {
            result[index++] = '*';
        }
    }
    result[index] = '\0';
    return result;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " -i|-w" << endl;
        return 1;
    }

    cout << "Please enter a string of maximum 30 characters: ";
    char str1[31];
    cin.getline(str1, 31);

    cout << "Please enter a string of maximum 30 characters: ";
    char str2[31];
    cin.getline(str2, 31);

    char* result = nullptr;
    if (strcmp(argv[1], "-i") == 0) {
        result = intersperse(str1, str2);
    } else if (strcmp(argv[1], "-w") == 0) {
        result = widen_stars(str1, str2);
    } else {
        cerr << "Invalid option. Use -i for intersperse or -w for widen with stars." << endl;
        return 1;
    }

    cout << "The combined string is: " << result << endl;

    delete[] result;
    return 0;
}
