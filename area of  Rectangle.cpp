#include<iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle(int w, int h):width(w), height(h){}
    int calculateArea(){
        return width * height;
    }
};
int main()
{
    int area=Rectangle(5, 10).calculateArea();
    cout<<"Area:"<<area<<endl;
    return 0;
}
