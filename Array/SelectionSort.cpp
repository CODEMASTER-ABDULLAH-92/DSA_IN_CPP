#include<iostream>
using namespace std;
void printArr(int arr[], int n){
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int n){
    for(int i = 0; i< n- 1; i++){
        int minIndex = i;
        // Why we use the int j = i + 1 in line no 14 because that the left side of array is sorted we don't need to move back 
        //Such that 92,72,5,12,45
        //In 1st Round The 5 is swapped by 92 and 5 is placed at correct position we don't need to check out the 5 at the 2 Round that's why we use the int j = i + 1;
        for(int j = i + 1; j< n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
int arr[5] = {92,72,5,12,45};
selectionSort(arr,5);
printArr(arr,5);
return 0;
}



// 1. Helper Function: printArr
// cpp
// Copy code
// void printArr(int arr[], int n) {
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// Purpose: This function prints the array elements.
// Parameters:
// arr[]: The array to print.
// n: The number of elements in the array.
// How it works: It iterates through each element of the array, prints it, and ends with a newline.
// 2. Main Sorting Function: selectionSort
// cpp
// Copy code
// void selectionSort(int arr[], int n) {
//     for(int i = 0; i < n - 1; i++) {
//         int minIndex = i;
//         for(int j = i + 1; j < n; j++) {
//             if(arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[minIndex], arr[i]);
//     }
// }
// Selection Sort Algorithm:

// The goal is to sort the array in ascending order.
// The array is conceptually divided into two parts:
// Sorted portion (left side): Grows with each iteration.
// Unsorted portion (right side): Shrinks as elements are placed in their correct positions.
// How it works:

// Outer Loop (for(int i = 0; i < n - 1; i++)):

// Iterates through the array.
// On each pass, it assumes the element at index i is the smallest in the unsorted portion.
// The ith position will hold the correct value after each iteration.
// Inner Loop (for(int j = i + 1; j < n; j++)):

// Searches for the smallest value in the unsorted portion (i+1 to n).
// Updates minIndex if a smaller element is found.
// Swapping:

// After finding the smallest element in the unsorted portion, it swaps this smallest element with the element at index i.
// Why j = i + 1?
// After the first pass, the smallest element is already in its correct position.
// There's no need to check elements on the left (arr[0...i]) again because they are already sorted.
// 3. main Function
// cpp
// Copy code
// int main() {
//     int arr[5] = {92, 72, 5, 12, 45};
//     selectionSort(arr, 5);
//     printArr(arr, 5);
//     return 0;
// }
// Initializes an array arr[5] with elements {92, 72, 5, 12, 45}.
// Calls selectionSort(arr, 5) to sort the array in ascending order.
// Calls printArr(arr, 5) to display the sorted array.
// Example Walkthrough
// Input Array: {92, 72, 5, 12, 45}

// First Pass (i = 0):

// Unsorted portion: {92, 72, 5, 12, 45}.
// Smallest value: 5 (at index 2).
// Swap 5 and 92.
// Array after first pass: {5, 72, 92, 12, 45}.
// Second Pass (i = 1):

// Unsorted portion: {72, 92, 12, 45}.
// Smallest value: 12 (at index 3).
// Swap 12 and 72.
// Array after second pass: {5, 12, 92, 72, 45}.
// Third Pass (i = 2):

// Unsorted portion: {92, 72, 45}.
// Smallest value: 45 (at index 4).
// Swap 45 and 92.
// Array after third pass: {5, 12, 45, 72, 92}.
// Fourth Pass (i = 3):

// Unsorted portion: {72, 92}.
// Smallest value: 72 (already in correct position).
// No swap needed.
// Array remains: {5, 12, 45, 72, 92}.



















// Why Start j = i + 1?
// No Need to Recheck Sorted Elements:

// After the first iteration, the smallest element in the array is placed at arr[0].
// During the second iteration, the element at arr[0] is already in its correct position.
// Therefore, there’s no need to compare it again in subsequent iterations.
// Efficiency:

// By starting j from i + 1, you skip unnecessary comparisons with elements that are already sorted.
// This reduces the total number of comparisons and makes the algorithm more efficient.
// Example Walkthrough
// Given an array: {92, 72, 5, 12, 45}

// First Pass (i = 0):
// Outer Loop: Starts with i = 0.
// Inner Loop (j = i + 1 = 1):
// Compare elements from index 1 to 4 (72, 5, 12, 45).
// Smallest element is 5 at index 2.
// Swap 92 with 5.
// Array after first pass: {5, 72, 92, 12, 45}.
// At this point:

// Sorted portion: {5}.
// Unsorted portion: {72, 92, 12, 45}.
// Second Pass (i = 1):
// Outer Loop: Moves to i = 1.
// Inner Loop (j = i + 1 = 2):
// Compare elements from index 2 to 4 (92, 12, 45).
// Smallest element is 12 at index 3.
// Swap 72 with 12.
// Array after second pass: {5, 12, 92, 72, 45}.
// Now:

// Sorted portion: {5, 12}.
// Unsorted portion: {92, 72, 45}.
// Third Pass (i = 2):
// Outer Loop: Moves to i = 2.
// Inner Loop (j = i + 1 = 3):
// Compare elements from index 3 to 4 (72, 45).
// Smallest element is 45 at index 4.
// Swap 92 with 45.
// Array after third pass: {5, 12, 45, 72, 92}.
// Now:

// Sorted portion: {5, 12, 45}.
// Unsorted portion: {72, 92}.
// Fourth Pass (i = 3):
// Outer Loop: Moves to i = 3.
// Inner Loop (j = i + 1 = 4):
// Compare the last two elements (72, 92).
// No swap needed as they are already in order.
// Array remains: {5, 12, 45, 72, 92}.
// Now:

// Entire array is sorted.
// Final Output
// The sorted array is {5, 12, 45, 72, 92}.

// By starting j = i + 1, you ensure that only the unsorted portion of the array is checked during each pass, avoiding redundant comparisons. This is a fundamental aspect of selection sort's design.