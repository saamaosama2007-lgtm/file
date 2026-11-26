#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream outFile("welcome.txt");
    outFile << "Hello Everybody";
    outFile.close();

    ifstream inFile("welcome.txt");
    string content;
    getline(inFile, content);
    inFile.close();

    size_t pos = content.find("body");
    if (pos != string::npos) {
        content.replace(pos, 4, "one");
    }

    ofstream finalFile("welcome.txt");
    finalFile << content;
    finalFile.close();

    return 0;
}
