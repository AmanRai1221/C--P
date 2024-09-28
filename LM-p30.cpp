#include<iostream>
using namespace std;
class Animal
{
    public:
    void eat(){
        cout<<"Eating"<<endl;
    }
};
class Dog:public Animal
{
    public:
    void bark(){
        cout<<"Bark"<<endl;
    }
};
class Cat:public Animal
{
    public:
    void meow(){
        cout<<"Meow"<<endl;
    }
};
int main()
{
    Dog d;
    d.eat();
    d.bark();

    Cat c;
    c.eat();
    c.meow();
    return 0;
}
