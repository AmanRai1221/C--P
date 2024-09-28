#include<iostream>
using namespace std;
 void count(){
    static int count = 0;
    count++;
    cout<<"Count: " << count << endl;
}
int main(){
    count();
    count();
    count();
    count();
    count();

    return 0;
}