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

// #include <iostream>
// using namespace std;

// int findUnique(int arr[], int size) {
//     int ans = 0;
//     for (int i = 0; i < size; i++) {
//         ans ^= arr[i];  // XOR cancels out duplicate numbers
//     }
//     return ans;
// }

// int main() {
//     int arr[5] = {1, 2, 3, 4, 4};  // Corrected array size
//     int unique = findUnique(arr, 5);  // Pass correct size
//     cout << "Unique: " << unique << endl;
//     return 0;
// }


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
//     Important Note that the XOR is between ans which is zero with every single element of the array 
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


// When we learn about the stl then solve this problem 

// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// void removeDuplicates(vector<int> &arr) {
//     unordered_map<int, bool> seen;
//     vector<int> result;

//     for (int num : arr) {
//         if (!seen[num]) {
//             seen[num] = true;
//             result.push_back(num);
//         }
//     }

//     arr = result; // update original vector
// }

// int main() {
//     vector<int> arr = {1, 1, 2, 3, 2, 4, 3};
//     removeDuplicates(arr);

//     cout << "Array after removing duplicates: ";
//     for (int num : arr) {
//         cout << num << " ";
//     }
//     cout << endl;

//     return 0;
// }




// Another approach

// class Solution {
//   public:
//     int findMissing(vector<int> &arr) {
//         int n = arr.size();

//         // Handle small cases
//         if (n < 2) return -1;

//         // Estimate correct common difference using the most reliable method
//         int diff = min(arr[1] - arr[0], arr[2] - arr[1]);

//         // Find the first place where the difference is not correct
//         for (int i = 0; i < n - 1; i++) {
//             if (arr[i + 1] - arr[i] != diff) {
//                 return arr[i] + diff;
//             }
//         }

//         // If all differences are correct, return the next expected element
//         return arr[n - 1] + diff;
//     }
// };





//Cyclic Rotate an array 
// #include<iostream>
// using namespace std;
// void printArr(int arr[], int length){
//     for(int i = 0; i< length; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void cyclic(int arr[], int length){
//     int last = arr[length - 1];
//     for(int i = length - 1; i>=0; i--){
//         arr[i] = arr[i - 1];
//     }
//     arr[0] = last;
// }
// int main(){
//  int arr[] = {1,2,3,4,5};
//  cyclic(arr,5);
//  printArr(arr,5);   
// return 0;
// }


#include<iostream>
using namespace std;
int missingNumber(int arr[], int length){
    int ans =0;
    int sum = 0;
    for(int i = 1; i<=length; i++){
        sum = sum + i;
        cout<<"sum: "<<sum<<endl;
    }
    //     for(int i =0; i< length-1; i++){
//         sum = sum + arr[i];
//     }
    for(int i = 0; i< length -1; i++){
        ans = ans + arr[i];
        cout<<"ans: "<<ans<<endl;
    }
    return sum - ans;
}
int main(){
 int arr[] = {1,2,3,4,5,7}; // the six is missing here 
 int res = missingNumber(arr,6);
 cout<<res<<" ";
return 0;
}