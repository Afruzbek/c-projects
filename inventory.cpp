/*This program is an inventory management system that tracks parts in a warehouse by allowing the user to add, search, update, and display parts using their part number, name, and quantity. It also provides an option to quit the program.*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MAX_PARTS = 100;

struct Part {
    int partNumber;
    string partName;
    int quantity;
};

Part inventory[MAX_PARTS];
int num_parts = 0;

void insertPart();
void searchPart();
void updatePart();
void printInventory();

int main() {
    char code;

    for (;;) {
        cout << "\nEnter operation code (i: insert, s: search, u: update, p: print, q: quit): ";
        cin >> code;
        cin.ignore(); 
        switch (code) {
            case 'i':
                insertPart();
                break;
            case 's':
                searchPart();
                break;
            case 'u':
                updatePart();
                break;
            case 'p':
                printInventory();
                break;
            case 'q':
                return 0;
            default:
                cout << "Error: Invalid operation code.\n";
        }
    }
}

void insertPart() {
    if (num_parts >= MAX_PARTS) {
        cout << "Inventory is full. Cannot add more parts.\n";
        return;
    }

    Part newPart;
    cout << "Enter part number: ";
    cin >> newPart.partNumber;
    cin.ignore(); 
    cout << "Enter part name: ";
    getline(cin, newPart.partName);
    cout << "Enter quantity on hand: ";
    cin >> newPart.quantity;

    inventory[num_parts++] = newPart;
    cout << "Part added successfully.\n";
}

void searchPart() {
    int partNumber;
    cout << "Enter part number: ";
    cin >> partNumber;

    for (int i = 0; i < num_parts; i++) {
        if (inventory[i].partNumber == partNumber) {
            cout << "Part name: " << inventory[i].partName << "\n";
            cout << "Quantity on hand: " << inventory[i].quantity << "\n";
            return;
        }
    }
    cout << "Part not found.\n";
}

void updatePart() {
    int partNumber, change;
    cout << "Enter part number: ";
    cin >> partNumber;

    for (int i = 0; i < num_parts; i++) {
        if (inventory[i].partNumber == partNumber) {
            cout << "Enter change in quantity on hand: ";
            cin >> change;
            inventory[i].quantity += change;
            cout << "Quantity updated successfully.\n";
            return;
        }
    }
    cout << "Part not found.\n";
}

void printInventory() {
    cout << "Part Number   Part Name             Quantity on Hand\n";
    for (int i = 0; i < num_parts; i++) {
        cout << setw(10) << inventory[i].partNumber << "   "
             << setw(20) << inventory[i].partName << "   "
             << setw(10) << inventory[i].quantity << "\n";
    }
}
