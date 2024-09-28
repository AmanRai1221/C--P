#include<iostream>
using namespace std;

class Person
{
public:
    Person(string name, int age): name_(name), age_(age){}
    void displayDetails(){
        cout<<"Name:" << name_ << "\n Age:" << age_ <<endl;
    }
private:
    string name_;
    int age_;
};
int main()
{
    Person person("Aman Rai", 21);
    person.displayDetails();
    return 0;
}
