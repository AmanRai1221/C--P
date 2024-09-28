#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        outputFile << inputFile.rdbuf();
        inputFile.close();
        outputFile.close();

        remove("input.txt");
        rename("output.txt", "input.txt");

        cout << "File renamed successfully." << endl;
    } else {
        cout << "Error: Unable to open file." << endl;
    }

    return 0;
}