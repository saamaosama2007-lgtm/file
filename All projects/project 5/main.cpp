#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outFile("students.txt", ios::app);

    char name[20];
    int id;
    float grade;
    char delim = '$';
    char choice;

    do {
        cout << "Enter Name: ";
        cin.getline(name, 20);

        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Grade: ";
        cin >> grade;

        outFile << name << ", " << id << ", " << grade << " " << delim << endl;

        cout << "Do you want to add another record? (y/n): ";
        cin >> choice;
        cin.ignore();

    } while (choice == 'y' || choice == 'Y');

    outFile.close();
    return 0;
}
