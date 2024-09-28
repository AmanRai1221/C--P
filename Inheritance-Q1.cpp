#include<iostream>
using namespace std;

class Animal
{
public:
    void eat(){
    cout<<"Animal is Eating..."<<endl;
    }
};
class Dog:public Animal
{
public:
    void bark(){
        cout<<"Dog is Barking..."<<endl;
    }
};
class Cat: public Animal
{
public:
    void meow(){
        cout<<"Cat is Meowing.."<<endl;
    }
};
int main()
{
    Dog dog;
    Cat cat;

    dog.eat();
    dog.bark();

    cat.eat();
    cat.meow();

    return 0;
}