#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // constructor
    Rectangle(int w = 0, int h = 0) {
        width = w;
        height = h;
    }

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle r(10, 5);
    cout << "Area: " << r.getArea() << endl;

    return 0;
}