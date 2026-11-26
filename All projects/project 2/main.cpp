
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream checkFile("fruit.txt");
    string firstLine;
    bool hasFruits = false;

    if (getline(checkFile, firstLine) && !firstLine.empty()) {
        hasFruits = true;
    }
    checkFile.close();

    if (!hasFruits) {
        ofstream initFile("fruit.txt");
        initFile << "Apple\nOrange\nBanana\n";
        initFile.close();
    }

    ifstream inFile("fruit.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    ofstream outFile("fruit.txt", ios::app);
    outFile << "Fresh Fruits\n";
    outFile.close();

    return 0;
}
