#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void selectionSort(int arr[], int n){
    for(int i = 0; i< n; i++){
        int minIndex = i;
        for(int j = i+1; j< n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
int arr[5] = {92,72,5,12,45};
selectionSort(arr, 5);
printArr(arr,5);
return 0;
}