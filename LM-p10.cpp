#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main() {
    // Declare a two-dimensional array of pointers
    int* arr[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
                arr[i][j] = new int(i * COLS + j);
        }
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << *arr[i][j] << " ";
        }
        cout <<endl;
    }

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            delete arr[i][j];
        }
    }

    return 0;
}
