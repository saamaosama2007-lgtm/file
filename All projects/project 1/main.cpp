#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fullName;
    int id;
    double grade;

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Grade: ";
    cin >> grade;

    ofstream outFile("Student.txt");
    if (outFile.is_open()) {
        outFile << "Full Name: " << fullName << endl;
        outFile << "ID: " << id << endl;
        outFile << "Grade: " << grade << endl;
        outFile.close();
        cout << "Data written to Student.txt successfully." << endl;
    } else {
        cout << "Error creating file!" << endl;
    }

    return 0;
}
