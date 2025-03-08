#include<iostream>
using namespace std;
int binary(int arr[],int n, int key){
    int start= 0;
    int end = n -1;
    int mid = start + (end - start) / 2; 
// int mid = (start + end) / 2;  This is logically True but not use this because if the value of end is greater than int it make an error
    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main(){
int arr[5] = {4,6,8,9,19};
int Index = binary(arr,5,19);
cout<<"Index "<<Index<<endl;
return 0;
}
