#include<iostream>
using namespace std;
class Animal
{
public:
    void et()
    {
        cout<<"Eating..";
    }
};
class Dog:public Animal
{
public:
    void eat()
    {
        cout<<"Eating bread...";
    }
};
int main(void)
{
    Dog d=Dog();
    d.eat();
    return 0;
}
