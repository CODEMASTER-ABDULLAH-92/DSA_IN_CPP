#include<iostream>
using namespace std;
int LinearSearch(int arr[], int n, int key){
    for(int i =0; i < n; i++){
        if(arr[ i ] == key){
            return 1;
        }
    }
    return 0;
}
int main(){
int arr[5] = {56,34,22,85,55};
int searchedNumber = LinearSearch(arr, 5,55);
if(searchedNumber == 1){
    cout<<"Key is Present: ";
}
else{
    cout<<"Key is Not Present: ";
}
return 0;
}