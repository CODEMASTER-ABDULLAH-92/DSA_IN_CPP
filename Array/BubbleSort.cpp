//In bubble sort we compare with the neighbour index element, But in selection Sort Compare with the next whole remaining array
//Not If a > b then Swapping


//Use Case :: In every ith round we shiftted the ith largest element at the right side
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
        //If we started the outer loop from int i = 1; i< n; then the inner loop condition is j<n-1; and if we use the int j =1; then use the j < n - i -1 ;
        for(int j = 0; j < n - i -1; j++){
            //Use the n - i instead of n-1; because the last element is Sorted;
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