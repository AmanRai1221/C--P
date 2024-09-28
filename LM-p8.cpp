#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int original=num;
    int reversed=0;
    int remainder;

    while(num != 0){
        remainder = num % 10;
        reversed = reversed *10+remainder;
        num = num/10;
    }
    if(original == reversed){
        cout<<"The number is a Palindrome"<< endl;
    }
    else{
        cout<<"The number is not a Palindrome"<<endl;
    }
    return 0;
}