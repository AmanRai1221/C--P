#include<iostream>
using namespace std;
class Employee
{

    public:
        int id;
        string name;
        float salary;
        Employee(int i,string n,float s)
            {

                id=i;
                name=n;
                salary=s;
            }
            void display()
            {

                cout<<id<<"__"<<name<<" "<<salary<<endl;

            }

};
int main(void)
{
    Employee e1(101, "Sonu", 8900);
    Employee e2(102, "Nakul", 5900);
    e1.display();
    e2.display();
    return 0;

}
