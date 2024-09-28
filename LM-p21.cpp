#include<iostream>
using namespace std;

void findMinMax(int arr[], int n, int& minVal, int& maxVal){
    minVal = arr[0];
    maxVal = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<minVal){
            minVal = arr[i];
        }
        if(arr[i]>maxVal){
            maxVal = arr[i];
        }
    }
}
int main()
{
    int arr[] = {1, 3, 5, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minVal, maxVal;

    findMinMax(arr, n, minVal, maxVal);
    cout<<"The Minimum value in the array is: " << minVal <<endl;
    cout<<"The Maximum value in the array is: " << maxVal <<endl;
    return 0;
}