#include<iostream>
using namespace std;

int sumOfNaturalNumbers(int n)
{
    if(n==1){
        return 1;
    }
    return n +sumOfNaturalNumbers(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number of natural numbers to sum: ";
    cin>>n;
    cout<<"The sum of the first " << n << " natural numbers is: " <<sumOfNaturalNumbers(n) << endl;
    return 0;
}