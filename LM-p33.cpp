#include <iostream>
using namespace std;

void print(int x) {
    cout << "Integer: " << x << endl;
}

void print(double x) {
    cout << "Double: " << x << endl;
}

void print(const char* x) {
    cout << "String: " << x << endl;
}

int main() {
    print(10);
    print(10.5);
    print("Hello");

    return 0;
}