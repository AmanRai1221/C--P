#include<iostream>
using namespace std;

void sortArray(int arr[], int n){
    for(int i=0; i<n; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        if(minIndex != i){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1, 4, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortArray(arr, n);
    printArray(arr, n);
    return 0;
}