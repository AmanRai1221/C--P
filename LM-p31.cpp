#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int w = 0, int h = 0) {
        width = w;
        height = h;
    }

    ~Rectangle() {
        cout << "Destructor called..." << endl;
    }

    int getArea() {
        return width * height;
    }

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }
};

int main() {
    Rectangle r(10, 5);

    cout << "Area: " << r.getArea() << endl;

    return 0;
}