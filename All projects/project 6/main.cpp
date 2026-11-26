#include <fstream>
#include <string>
#include <vector>

int main() {
    std::ofstream outFile("Students.txt");
    outFile << "Ali Ahmed\n";
    outFile << "Mohamed Rady\n";
    outFile << "Youssef Zaki\n";
    outFile.close();

    std::ifstream inFile("Students.txt");
    std::vector<std::string> lines;
    std::string line;
    while (std::getline(inFile, line)) {
        lines.push_back(line);
    }
    inFile.close();

    std::ofstream rewriteFile("Students.txt");
    for (size_t i = 1; i < lines.size(); ++i) {
        rewriteFile << lines[i] << "\n";
    }
    rewriteFile.close();

    return 0;
}
