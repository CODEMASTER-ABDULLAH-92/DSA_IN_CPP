//  ==================>>>>>>>>>>    Find the Second Largest Element

// #include<iostream>
// using namespace std;

// int secondLargest(int arr[], int length) {
//     if (length < 2) return -1; // If there are fewer than 2 elements, return -1

//     int first = INT_MIN, second = INT_MIN;

//     for (int i = 0; i < length; i++) {
//         if (arr[i] > first) {  
//             second = first;  // Update second largest before changing first
//             first = arr[i];  // Update first largest
//         } 
//         else if (arr[i] > second && arr[i] != first) {  
//             second = arr[i]; // Update second largest only if it's not equal to first
//         }
//     }
//     return (second == INT_MIN) ? -1 : second; // Return -1 if no second largest found
// }

// int main() {
//     int arr[] = {12, 34, 65, 23, 22};
//     int response = secondLargest(arr, 5);
//     cout << response << " ";
//     return 0;
// }



//Missing Number in an array

// #include<iostream>
// using namespace std;
// int missingNumber(int arr[], int length){
//     int sum = 0;
//     int ans = 0;

//     for(int i =0; i< length-1; i++){
//         sum = sum + arr[i];
//     }
//     ans = length *(length + 1)/2;
//     return ans - sum;
// }
// int main(){
//     int arr[] = {1,2,3,4,6};
//     int res = missingNumber(arr,5);
//     cout<<res<<" \n";
// return 0;
// }


//Fibonacci Series


// #include<iostream>
// using namespace std;
// void printArr(int arr[], int length){
//     for(int i =0; i<length; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void evenOdd(int arr[], int length){
//     int evenArr[length];
//     int oddArr[length];

//     int evenIndex =0;
//     int oddIndex = 0;


//     for(int i =0; i<length;i++){
//         if (arr[i] % 2 == 0)
//         {
//             evenArr[evenIndex] = arr[i];
//             evenIndex++;
//         }
//         else
//         {
//             oddArr[oddIndex] = arr[i];
//             oddIndex++;
//         }
//     }
//     cout<<"Even Array: ";
// printArr(evenArr,evenIndex);
//     cout<<"Odd Array: ";
// printArr(oddArr,oddIndex);

// }
// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printArr(arr,6);
//     evenOdd(arr,6);
// return 0;
// }


//Prime Number

// #include<iostream>
// #include<cmath>  // Include cmath for sqrt function
// using namespace std;

// int findPrime(int length){
//     if(length <= 1) return -1;  // 0 and 1 are not prime numbers
//     if(length == 2) return 1;   // 2 is the only even prime number
//     for(int i = 2; i <= sqrt(length); i++){  // Check divisors up to sqrt(length)
//         if (length % i == 0) {
//             return -1;  // Not a prime number
//         }
//     }
//     return 1;  // Prime number
// }

// int main(){   
//     cout << "Enter The Number: ";
//     int number;
//     cin >> number;
//     int res = findPrime(number);
//     if (res == 1) {
//         cout << number << " is a prime number." << endl;
//     } else {
//         cout << number << " is not a prime number." << endl;
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int isPrime(int n){
    if(n < 2) return false;
    for(int i =2; i<n; i++){
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int result = isPrime(n);
    cout<<result<<" ";
return 0;
}



//                      Rotate an Array by 1


// #include<iostream>
// using namespace std;
// void printArr(int arr[], int length){
//     for(int i =0; i<length; i++){
//         cout<<arr[i]<<" ";
//     }
// }
// void rotateByOne(int arr[], int length){
//     int temp = arr[length - 1];
//     for(int i = length - 1; i>0; i--){
//         arr[i] = arr[ i -1];
//     }
//     arr[0] = temp;
// }
// int main(){
//     int arr[] = {2,5,8,9,11};
//     cout<<"Before: ";
//     printArr(arr,5);
//     cout<<endl;
//     cout<<"After: ";
//     rotateByOne(arr,5);
//     printArr(arr,5);
// return 0;
// }




// Second Largest Elememt in the Array 

// #include<iostream>
// using namespace std;

// int secondLargest(int arr[], int length) {
//     if (length < 2) return -1; // If there are fewer than 2 elements, return -1

//     int first = INT_MIN, second = INT_MIN;

//     for (int i = 0; i < length; i++) {
//         if (arr[i] > first) {  
//             second = first;  // Update second largest before changing first
//             first = arr[i];  // Update first largest
//         } 
//         else if (arr[i] > second && arr[i] != first) {  
//             second = arr[i]; // Update second largest only if it's not equal to first
//         }
//     }
//     return (second == INT_MIN) ? -1 : second; // Return -1 if no second largest found
// }

// int main() {
//     int arr[] = {12, 34, 65, 23, 22};
//     int response = secondLargest(arr, 5);
//     cout << response << " ";
//     return 0;
// }



// ==================>>>>>>>> Sorting of 01 

// #include<iostream>
// using namespace std;
// void sorting(int arr[],int size){
//     int start =0;
//     int end = size - 1;
//     while (start <=end)
//     {
//         if(arr[start] == 0 && start<=end){
//             start++;
//         }
//         if(arr[end] == 1 && start <=end){
//             end--;
//         }
//         if(arr[start] == 1 && arr[end] == 0 && start<=end){
//             swap(arr[start],arr[end]);
//         }
//     }
    
// }
// void printArr(int arr[], int size){
//     for(int i =0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){

// int arr[7] ={1,0,0,1,1,0,1};
// printArr(arr,7);
// sorting(arr,7);
// printArr(arr,7);
// return 0;
// }



//================================>>>>>>>>>>>>>Alternate Reverse the Array


//  InPut 4 6 3 6 2 9 
// OutPut 6 4 6 3 9 2 
// #include<iostream>
// using namespace std;
// void reverseAlternate(int arr[], int size){
//     for(int i =0; i<size; i = i+2){
//         if( i + 1 < size)
//         //Size is length of array Not index No
//         swap(arr[i],arr[i + 1]);
//     }
// }
// void printArr(int arr[],int size){
//     for(int i =0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
// int arr[6] = {4,6,3,6,2,9};
// printArr(arr,6);
// reverseAlternate(arr, 6);
// printArr(arr,6);
// return 0;
// }








// =========================>>>>>>>>>>>>>>>>Reverse of Array:
//=======================>>>>>>>>>>>>>>This is also Two pointer Game
// Input ===>> 1 2 3 4 5 
// OutPut ====>>> 5 4 3 2 1

// #include <iostream>
// using namespace std;
// void print(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// void reser(int arr[], int size)
// {
//     int s = 0;
//     int end = size - 1;
//     while (s <= end)
//     {
//         swap(arr[s], arr[end]);
//         s++;
//         end--;
//     }
//     {
//         /* code */
//     }
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     reser(arr, 5);
//     print(arr, 5);
//     return 0;
// }