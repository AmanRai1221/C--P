#include <iostream>
using namespace std;

void swapNumbers(int& num1, int& num2) {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    swapNumbers(num1, num2);

    cout << "After swapping, first number is: " << num1 << endl;
    cout << "After swapping, second number is: " << num2 << endl;

    return 0;
}