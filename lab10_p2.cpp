/*This program returns the size of a program in bytes*/
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    ifstream file(argv[1], ios::binary | ios::ate);
    if (!file.is_open()) {
        cout << "File cannot be opened." << endl;
        return 1;
    }

    streampos size = file.tellg();
    file.close();

    cout << "Size of file '" << argv[1] << "' is " << size << " bytes." << endl;
    return 0;
}