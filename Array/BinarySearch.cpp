//1st Approach 
// #include<iostream>
// using namespace std;
// int binary(int arr[],int n, int key){
//     int start= 0;
//     int end = n -1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if(arr[mid] == key){
//             return mid;
//         }
//         if(arr[mid] < key){
//             start = mid + 1;
//         }
//         if(arr[mid] > key){
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int main(){
// int arr[5] = {4,6,8,9,19};
// int Index = binary(arr,5,19);
// cout<<"Index "<<Index<<endl;
// return 0;
// }


// 2nd Approch 


#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main(){
    int arr[5] = {3,6,77,88,99};
    int index = binarySearch(arr,5,6);
    if(index == 0){
        cout<<"Key is Not Present: "<<endl;
    }
    else{
        cout<<"Key is Present: "<<index<<endl;
    }
return 0;
}