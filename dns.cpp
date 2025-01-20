/*The program simulates a DNS by reading hostnames and IP addresses from a file, 
storing them in a dynamic array, and allowing users to query the database for an 
IP address by entering a hostname. It supports multiple searches and notifies users 
if a hostname is not found.*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct MyHost {
    string hostName;
    string ipAddress;
};

MyHost* loadDatabase(const string& filename, int& numHosts) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Could not open file " << filename << endl;
        return nullptr;
    }

    file >> numHosts; 
    MyHost* database = new MyHost[numHosts];

    for (int i = 0; i < numHosts; ++i) {
        file >> database[i].hostName >> database[i].ipAddress;
    }
    file.close();
    return database;
}

void queryDatabase(MyHost* database, int numHosts) {
    string query;
    cout << "Enter a host name to query (or 'exit' to quit): ";
    while (cin >> query && query != "exit") {
        bool found = false;
        for (int i = 0; i < numHosts; ++i) {
            if (database[i].hostName == query) {
                cout << "Host: " << database[i].hostName
                     << ", IP Address: " << database[i].ipAddress << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Error: Hostname '" << query << "' not found in the database." << endl;
        }
        cout << "Enter a host name to query (or 'exit' to quit): ";
    }
}
int main() {
    string filename = "DNS.txt";
    int numHosts = 0;
    MyHost* database = loadDatabase(filename, numHosts);

    if (database != nullptr) {
        queryDatabase(database, numHosts);
        delete[] database; 
    }

    return 0;
}
