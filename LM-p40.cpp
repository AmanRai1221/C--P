#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream outputFile("output.txt");

    if (outputFile.is_open()) {
        outputFile << "Hello, World!" << endl;
        outputFile.close();
        cout << "Data written to file successfully." << endl;
    } else {
        cout << "Error: Unable to open file." << endl;
    }

    return 0;
}