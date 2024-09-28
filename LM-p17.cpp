#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char operation;
    cout<<"Enter the first number: ";
    cin>>num1;

    cout<<"Enter the operation(+, -, *, /): ";
    cin>>operation;

    cout<<"Enter the second number: ";
    cin>>num2;

    switch(operation){
        case '+':
        cout<<"The result is: " << num1 + num2 <<endl;
        break;
        case '-':
        cout<<"The result is: " << num1-num2 <<endl;
        break;
        case '*':
        cout<<"The result is: " << num1*num2 <<endl;
        break;
        case '/':
        if(num2==0){
            cout<<"Error: Division by zero is not allowed."<<endl;
        }
        else{
            cout<<"The result is: "<<num1/(float)num2 <<endl;
        }
        break;
        default:
        cout<<"Error:Invalid operation " << endl;
        break;
    }
    return 0;
}