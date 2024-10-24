#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbldde(int arr[], int n){
    for(int i =0; i< n; i++){
        for(int j = 0; j < n - i -1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main(){
int arr[5] = {92,72,5,12,45};
bubbldde(arr, 5);
printArr(arr,5);
return 0;
}