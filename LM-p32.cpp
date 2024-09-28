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

    int getWidth() {
        return width;
    }

    int getHeight() {
        return height;
    }

    void setWidth(int w) {
        width = w;
    }

    void setHeight(int h) {
        height = h;
    }

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle r(10, 5);

    cout << "Width: " << r.getWidth() << endl;
    cout << "Height: " << r.getHeight() << endl;
    cout << "Area: " << r.getArea() << endl;

    r.setWidth(20);
    r.setHeight(10);

    cout << "New Width: " << r.getWidth() << endl;
    cout << "New Height: " << r.getHeight() << endl;
    cout << "New Area: " << r.getArea() << endl;

    return 0;
}