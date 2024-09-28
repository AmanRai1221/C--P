#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void display() = 0;
};

class Car : public Vehicle {
public:
    void display() {
        cout << "This is a car." << endl;
    }
};
class Bike : public Vehicle {
public:
    void display() {
        cout << "This is a bike." << endl;
    }
};

int main() {
    
    Car myCar;
    Bike myBike;

    myCar.display();
    myBike.display();

    return 0;
}