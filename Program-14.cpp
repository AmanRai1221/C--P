#include<iostream>
using namespace std;
class Box
{
public:
    double length;
    double breadth;
    double height;

    double getVolume(void);
    void setLength(double l);
    void setBreadth(double b);
    void setHeight(double h);
};
double Box :: getVolume(void)
{
    return length*breadth*height;
}
void Box::setLength(double l)
{
    length = l;
}
void Box::setBreadth(double b)
{
    breadth = b;
}
void Box::setHeight(double h)
{
    height = h;
}
int main()
{
    Box Box1;
    Box Box2;
    double volume = 0.0;

    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);

    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    volume = Box1.getVolume();
    cout<<"Volume of Box1: "<<volume<<endl;

    volume = Box2.getVolume();
    cout<<"Volume of Box2: "<<volume<<endl;
    return 0;
}
