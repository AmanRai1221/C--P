#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    for(int i=0; i<n; i++){
        int maxIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[maxIndex]){
                maxIndex = j;
            }
        }
        if(maxIndex != i){
            int temp = arr[i];
            arr[i] = arr[maxIndex];
            arr[maxIndex] = temp;
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1, 5, 8, 3, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortArray(arr, n);
    printArray(arr, n);
    return 0;
}