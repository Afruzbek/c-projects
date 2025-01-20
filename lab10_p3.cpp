/*This program concatenates the contents of two text files 
and produce it's output in a third file*/
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Usage: " << argv[0] << " <file1> <file2> <output_file>" << endl;
        return 1;
    }

    const char* file1 = argv[1];
    const char* file2 = argv[2];
    const char* output_file = argv[3];

    ifstream input1(file1);
    if (!input1) {
        cerr << "Error: Could not open file " << file1 << endl;
        return 1;
    }

    ifstream input2(file2);
    if (!input2) {
        cerr << "Error: Could not open file " << file2 << endl;
        return 1;
    }

    ofstream output(output_file);
    if (!output) {
        cerr << "Error: Could not create output file " << output_file << endl;
        return 1;
    }

    string line;

    while (getline(input1, line)) {
        output << line << endl;
    }
    input1.close();

    while (getline(input2, line)) {
        output << line << endl;
    }
    input2.close();

    output.close();

    cout << "Contents of " << file1 << " and " << file2 << " have been concatenated into " << output_file << endl;

    return 0;
}
