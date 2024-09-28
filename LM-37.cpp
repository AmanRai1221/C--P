#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing rectangle..." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing circle..." << endl;
    }
};

int main() {
    Shape* s1 = new Rectangle();
    Shape* s2 = new Circle();

    s1->draw();
    s2->draw();

    delete s1;
    delete s2;

    return 0;
}