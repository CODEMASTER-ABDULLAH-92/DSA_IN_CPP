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


//=====================>>>>>>>>>>>>> Minimum value and Maximum value
// #include<iostream>
// using namespace std;
// void printArr(int arr[],int size){
// int max = INT_MIN;
// for(int i=0; i<size; i++){
// if(arr[i] > max){
//     max= arr[i];
// }
// }
// cout<<"Max: "<<max<<endl;
// int min = INT_MAX;
// for(int i=0; i<size; i++){
//     if(arr[i] < min){
//         min= arr[i];
//     }
// }
// cout<<"Min: "<<min;
// }
// int main(){
// int arr[5]={1,2,3,4,5};
// printArr(arr,5);
// return 0;
// }

// =============>>>>>>>>>>>>>>>>>>>>>2nd Approach

// #include<iostream>
// using namespace std;
// void printArr(int arr[],int size){
//     for(int i=0; i < size; i++){
//         cout<<arr[i]<<"  ";
//     }
// }
// int getMax(int arr[],int size){
//     int max = INT_MIN;
//     for(int i =0; i< size; i++){
//         if(arr[i] > max){
//             max= arr[i];
//         }
//     }
//     return max;
// }
// int getMin(int arr[],int size){
//     int min = INT_MAX;
//     for(int i =0; i< size; i++){
//         if(arr[i] < min){
//             min= arr[i];
//         }
//     }
//     return min;
// }
// int main(){
// int arr[10];
// for(int i=0; i<10; i++){
//     cin>>arr[i];
// }
// printArr(arr,10);
// int max= getMax(arr,10);
// int min= getMin(arr,10);
// cout<<"Maximum: " <<max<<endl;
// cout<<"Minimum: " <<min<<endl;
// return 0;
// }

//========================>>>>>>>>>>>>>>>>>> Linear Searching

// #include<iostream>
// using namespace std;
// int search(int arr[],int size, int key){
//     for(int i=0; i<size; i++){
//         if(arr[i] == key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
// int arr[5];
// cout<<"Enter the values: ";
// for(int i =0; i<5; i++){
//     cin>>arr[i];
// }
// int key;
// cout<<"Enter the Key: ";
// cin>>key;
// int found = search(arr,5,key);
// if(found){
//     cout<<"Key is present:";
// }
// else{
//     cout <<"Key is Not Presnet: ";
// }
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



//Find the unique element in the array
// int arr[5] = {2,2,4,5,5};
//OutPut is Unique: 4 

// #include<iostream>
// using namespace std;
// int findUnique(int arr[],int size){
//     int ans = 0;
//     for(int i =0; i< size; i++){
//         ans = ans^arr[i];
//     }
//     return ans;
// }
// int main(){
// int arr[6] = {1,2,3,3,4,4};
// int unique = findUnique(arr,6);
// cout<<"Unique: "<<unique;
// return 0;
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
