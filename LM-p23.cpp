#include<iostream>
#include<string>
using namespace std;

void concatenateStrings(string& str1, string str2){
    str1 += str2;
}
int main()
{
    string str1 = "Hello";
    string str2 = "World";
    
    concatenateStrings(str1, str2);
    cout<< "Concatenated string: " << str1 << endl;
    return 0;
}