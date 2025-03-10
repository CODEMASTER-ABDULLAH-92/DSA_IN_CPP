// #include<iostream>
// using namespace std;
// int main(){
// int arr[15] = {1,2,3,4,5};
// int n =15;
// for(int i =0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// // Output 1 2 3 4 5 0 0 0 0 0 0 0 0 0 0
// return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
// int arr[10] = {0};
// int n =10;
// for(int i =0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// // Output  0 0 0 0 0 0 0 0 0 0
// return 0;
// }


// Find the unique element in the array
// int arr[5] = {2,2,4,5,5};
// OutPut is Unique: 4 

#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int ans = 0;
    for (int i = 0; i < size; i++) {
        ans ^= arr[i];  // XOR cancels out duplicate numbers
    }
    return ans;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 4};  // Corrected array size
    int unique = findUnique(arr, 5);  // Pass correct size
    cout << "Unique: " << unique << endl;
    return 0;
}


// For the given array {1, 2, 3, 3, 4, 4}:
// ans starts as 0.
// ans = 0 ^ 1 = 1
// ans = 1 ^ 2 = 3
// ans = 3 ^ 3 = 0
// ans = 0 ^ 4 = 4
// ans = 4 ^ 4 = 0
// The final value of ans is 0, which is the unique element.




//This is so Trick Right Now 26 Sep 2024
// #include<iostream>
// using namespace std;
// int findDuplicat(int arr[], int size) 
// {
//     int ans = 0;
//     for(int i = 0; i<size; i++ ) {
//     	ans = ans^arr[i];
    // Important Note that the XOR is between ans which is zero with every single element of the array 
//     }
	
//     for(int i = 1; i<size;i++ ) {
//     	ans = ans^i;
//     }
//     return ans;
// }
// int main(){
// int arr[10] ={1,2,5,5,4};
// int a = findDuplicat(arr,10);
// cout<<"A = "<<a<<endl;
// }

