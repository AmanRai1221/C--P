#include<iostream> //Header File
using namespace std; //Standard Namespace
class Calculate  //Class Declaration
{
public:  //Access Modifiers
    int num1=500; //Data Member
    int num2=999; //Data Member
    int addition() //Member Function
    {
        int result=num1 + num2; //Member Function
        cout<<result<<endl; //Member Function
    }
};
int main()
{

    Calculate add;  //Object Declaration
    add.addition(); //Member Function Call
    return 0;     //Return Statement
}
