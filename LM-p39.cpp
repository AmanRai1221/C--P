#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream tempFile("temp.txt");

    if (tempFile.is_open()) {
        tempFile << "This is a temporary file." << endl;
        tempFile.close();
        cout << "Temporary file created successfully." << endl;
    } else {
        cout << "Error: Unable to create temporary file." << endl;
    }

    return 0;
}