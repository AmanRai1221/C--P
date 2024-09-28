#include <iostream>
using namespace std;

class Counter {
private:
    int value;

public:
    Counter(int v = 0) : value(v) {}

    Counter& operator++() {
        value++;
        return *this;
    }

    Counter operator++(int) {
        Counter temp(*this);
        value++;
        return temp;
    }

    Counter& operator--() {
        value--;
        return *this;
    }

    Counter operator--(int) {
        Counter temp(*this);
        value--;
        return temp;
    }

    int getValue() {
        return value;
    }
};

int main() {
    Counter c(10);

    cout << "Value before increment: " << c.getValue() << endl;
    c++;
    cout << "Value after increment: " << c.getValue() << endl;

    cout << "Value before decrement: " << c.getValue() << endl;
    c--;
    cout << "Value after decrement: " << c.getValue() << endl;

    return 0;
}