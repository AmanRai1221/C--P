#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int original=num;
    int digits=0;
    int sum=0;

    while(num!=0){
        digits++;
        num=num/10;
    }
    num=original;
    while(num!=0){
        int remainder=num%10;
        sum=sum+pow(remainder, digits);
        num=num/10;
    }
    if(original == sum){
        cout<<"The number is Armstrong number"<<endl;
    }
    else{
        cout<<"The number is not Armstrong number"<<endl;
    }
    return 0;
}