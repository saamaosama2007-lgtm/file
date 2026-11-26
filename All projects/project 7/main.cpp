#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string students[4] = {
        "Hadeer Mahmoud",
        "Youssef Ali",
        "Ahmed Mostafa",
        "Esraa Ebrahim"
    };

    int n = sizeof(students) / sizeof(students[0]);

    sort(students, students + n);

    for (int i = 0; i < n; i++) {
        cout << students[i] << endl;
    }

    return 0;
}
