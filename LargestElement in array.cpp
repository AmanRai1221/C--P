#include<iostream>
using namespace std;

int findLargestElement(int arr[],int size)
{
    int max = arr[0];
    for(int i=1; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[] = {10, 5, 20, 8, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = findLargestElement(arr, size);
    cout<<"The largest element in the array is: "<<largest<<endl;
    return 0;
}
