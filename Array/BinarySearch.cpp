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



// ======================= >>>>>>>>>>>>>>>>> Notes



// 1. #include<iostream>
// Includes the C++ standard input/output library, allowing the use of cin, cout, etc.
// 2. using namespace std;
// Allows standard library functions and objects like cout to be used without explicitly prefixing them with std::.
// 3. int binary(int arr[], int n, int key)
// Defines the binary function to search for key in a sorted array using the Binary Search approach.
// Parameters:
// arr[]: The sorted array to search in.
// n: The size of the array.
// key: The element to search for.
// Return Value:
// Returns the index of the key if found.
// Returns -1 if the key is not present.
// 4. Variable Initialization
// cpp
// Copy code
// int start = 0;
// int end = n - 1;
// int mid = start + (end - start) / 2;
// Explanation:
// start:

// Points to the beginning of the array.
// Initially set to 0.
// end:

// Points to the last index of the array.
// Set to n - 1.
// mid:

// Calculates the middle index of the range [start, end].
// Formula: mid = start + (end - start) / 2.
// This avoids integer overflow, which might occur with mid = (start + end) / 2 when start + end exceeds the range of integers.
// 5. while (start <= end)
// The loop runs as long as start is less than or equal to end, meaning there are elements in the range to search.
// 6. Condition Checks
// Condition 1: if (arr[mid] == key)
// cpp
// Copy code
// if (arr[mid] == key) {
//     return mid;
// }
// If the middle element (arr[mid]) is equal to the key, the function returns the mid index. This is the base case for the search.
// Condition 2: if (arr[mid] < key)
// cpp
// Copy code
// if (arr[mid] < key) {
//     start = mid + 1;
// }
// If the middle element is smaller than the key, the key must be in the right half of the array.
// Update start to mid + 1 to search only the right half in the next iteration.
// Condition 3: if (arr[mid] > key)
// cpp
// Copy code
// if (arr[mid] > key) {
//     end = mid - 1;
// }
// If the middle element is larger than the key, the key must be in the left half of the array.
// Update end to mid - 1 to search only the left half in the next iteration.
// 7. Update mid
// cpp
// Copy code
// mid = start + (end - start) / 2;
// Recalculate the middle index based on the updated start and end.
// 8. Return -1
// cpp
// Copy code
// return -1;
// If the key is not found after the loop, return -1.
// 9. int main()
// The main function tests the binary function.

// Step 1: Initialize the Array
// cpp
// Copy code
// int arr[5] = {4, 6, 8, 9, 19};
// A sorted array of 5 integers.
// Step 2: Call the binary Function
// cpp
// Copy code
// int Index = binary(arr, 5, 19);
// Searches for the key (19) in the array.
// Step 3: Print the Result
// cpp
// Copy code
// cout << "Index " << Index << endl;
// Prints the index of the key if found, or -1 if not.
// Example Walkthrough
// Input:
// Array: {4, 6, 8, 9, 19}
// Key: 19
// Iteration 1:
// start = 0, end = 4
// mid = 0 + (4 - 0) / 2 = 2
// Compare arr[mid] (8) with key (19):
// 8 < 19: Update start = mid + 1 = 3.
// Iteration 2:
// start = 3, end = 4
// mid = 3 + (4 - 3) / 2 = 3
// Compare arr[mid] (9) with key (19):
// 9 < 19: Update start = mid + 1 = 4.
// Iteration 3:
// start = 4, end = 4
// mid = 4 + (4 - 4) / 2 = 4
// Compare arr[mid] (19) with key (19):
// 19 == 19: Return mid = 4.
// Output
// plaintext
// Copy code
// Index 4
// Key Advantages
// Efficient:

// Time complexity: 
// 𝑂
// (
// log
// ⁡
// 𝑛
// )
// O(logn) because the search range halves with each iteration.
// Space complexity: 
// 𝑂
// (
// 1
// )
// O(1), no extra memory used.
// Avoids Overflow:

// mid = start + (end - start) / 2 prevents integer overflow when start and end are large.
// General Purpose:

// Works for any sorted array.
// This implementation is correct and handles edge cases efficiently. 🎉
