#include<iostream>
using namespace std;

int findLargestElement(int arr[], int n){
    int largest = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[] = {1, 5, 8, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargestElement(arr, n);
    cout<<"The largest element in the array is: " << largest << endl;
    return 0;
}