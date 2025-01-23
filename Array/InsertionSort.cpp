#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void insertionSort(int arr[], int n){
    for(int i = 1; i < n - 1; i++){
        int temp = arr[i];
        int j;
        for(j = i - 1; j >= 0; j--){
            if(arr[j]> temp){
                arr[j + 1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j + 1] = temp;
    }
}
int main(){
int arr[5] = {92,45,12,5,72};
insertionSort(arr,5);
printArr(arr,5);
return 0;
}