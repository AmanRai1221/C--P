#include<iostream>
using namespace std;
void registerStorageClass()
{
    cout<<"Demonstrating register class\n";
    register char b ='G';
    cout<<"Value of the variable 'b'"<<"declared as register: "<<b;
}
int main()
{
    registerStorageClass();
    return 0;
}
