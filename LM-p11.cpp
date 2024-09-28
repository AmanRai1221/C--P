#include <iostream>
using namespace std;

void addMatrices(int** matrix1, int** matrix2, int** result, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the order of the matrices (n): ";
    cin >> n;

    int** matrix1 = new int*[n];
    int** matrix2 = new int*[n];
    int** result = new int*[n];

    for (int i = 0; i < n; i++) {
        matrix1[i] = new int[n];
        matrix2[i] = new int[n];
        result[i] = new int[n];
    }

    cout << "Enter elements of matrix 1:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of matrix 2:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix2[i][j];
        }
    }

    addMatrices(matrix1, matrix2, result, n);

    cout << "Matrix 1:" << endl;
    printMatrix(matrix1, n);

    cout << "Matrix 2:" << endl;
    printMatrix(matrix2, n);

    cout << "Resultant Matrix:" << endl;
    printMatrix(result, n);

    for (int i = 0; i < n; i++) {
        delete[] matrix1[i];
        delete[] matrix2[i];
        delete[] result[i];
    }

    delete[] matrix1;
    delete[] matrix2;
    delete[] result;

    return 0;
}