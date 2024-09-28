#include<iostream>
using namespace std;
class Calculate
{
public:
    int num1 = 50;
    int num2 = 30;
    int addition()
    {
        int result = num1+num2;
        cout<<result<<endl;
    }
};
int main()
{
    Calculate add;
    add.addition();
    return 0;
}
