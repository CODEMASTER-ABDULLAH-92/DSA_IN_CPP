//In bubble sort we compare with the neighbour index element, But in selection Sort Compare with the next whole remaining array
//Note If a > b then Swapping


//Use Case :: In every ith round we shiftted the ith largest element at the right side
// #include<iostream>
// using namespace std;
// void printArr(int arr[], int n){
//     for(int i =0; i< n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void bubbleSort(int arr[], int n){
//     for(int i =0; i< n; i++){
//         bool swapped = false;
//         //If we started the outer loop from int i = 1; i< n; then the inner loop condition is j<n-1; and if we use the int j =0; then use the j < n - i -1 ;
//         for(int j = 0; j < n - i -1; j++){
//             //Use the n - i - 1  instead of n-1; because the last element is Sorted;
//             if(arr[j] > arr[j + 1]){
//                 swap(arr[j], arr[j + 1]);
//                 swapped= true;
//             }
//         }
//         if(swapped == false){
//             break;
//         }
//     }
// }
// int main(){
// int arr[5] = {92,72,5,12,45};
// bubbleSort(arr, 5);
// printArr(arr,5);
// return 0;
// }






// ============== Notes This code implements the Bubble Sort algorithm in C++ to sort an array in ascending order. Here's a detailed line-by-line explanation:

// 1. #include<iostream>
// Includes the standard input-output library for C++.
// Required for functions like cout, cin, etc.
// 2. using namespace std;
// Allows the use of standard library functions and objects (like cout) without explicitly prefixing them with std::.
// 3. void printArr(int arr[], int n)
// This is a helper function to print the elements of an array:

// cpp
// Copy code
// void printArr(int arr[], int n){
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// Parameters:
// arr[]: The array to be printed.
// n: The number of elements in the array.
// Purpose: Iterates through the array and prints each element followed by a space. Ends with a newline.
// 4. void bubbleSort(int arr[], int n)
// This function implements the Bubble Sort algorithm to sort the array in ascending order.

// Outer Loop: for(int i = 0; i < n; i++)
// cpp
// Copy code
// for(int i = 0; i < n; i++) {
//     bool swapped = false;
// Purpose: Iterates over the array to perform multiple passes. After each pass, the largest unsorted element "bubbles up" to its correct position.
// Variable swapped:
// Used to track whether any swapping occurred in the current pass.
// If no swapping happens, the array is already sorted, and we can break out of the loop early.
// Inner Loop: for(int j = 0; j < n - i - 1; j++)
// cpp
// Copy code
// for(int j = 0; j < n - i - 1; j++) {
//     if(arr[j] > arr[j + 1]) {
//         swap(arr[j], arr[j + 1]);
//         swapped = true;
//     }
// }
// Purpose: Compares adjacent elements (arr[j] and arr[j + 1]), and swaps them if they are in the wrong order (i.e., if arr[j] > arr[j + 1]).
// Condition j < n - i - 1:
// With each pass, the largest element in the unsorted part is moved to its correct position.
// So, we don’t need to check the already sorted portion (n - i - 1 elements at the end of the array).
// Swapping:
// cpp
// Copy code
// swap(arr[j], arr[j + 1]);
// swapped = true;
// Swaps the elements if the current element is greater than the next.
// Sets swapped = true to indicate that a swap occurred.
// Early Exit: if(swapped == false)
// cpp
// Copy code
// if(swapped == false) {
//     break;
// }
// If no swaps were made in a pass, the array is already sorted.
// Breaks out of the loop early, optimizing the algorithm for nearly sorted arrays.
// 5. int main()
// The main function executes the sorting and printing.

// Step 1: Initialize the array
// cpp
// Copy code
// int arr[5] = {92, 72, 5, 12, 45};
// An array of 5 integers is defined with unsorted values: {92, 72, 5, 12, 45}.
// Step 2: Call the sorting function
// cpp
// Copy code
// bubbleSort(arr, 5);
// Calls bubbleSort to sort the array.
// Step 3: Call the print function
// cpp
// Copy code
// printArr(arr, 5);
// Prints the sorted array to the console.
// 6. Example Walkthrough
// Input:
// plaintext
// Copy code
// 92 72 5 12 45
// Pass 1 (i = 0):
// Inner loop runs j = 0 to 3 (n - i - 1 = 4):
// Compare and swap adjacent elements if needed:
// Compare 92 and 72 → Swap → {72, 92, 5, 12, 45}
// Compare 92 and 5 → Swap → {72, 5, 92, 12, 45}
// Compare 92 and 12 → Swap → {72, 5, 12, 92, 45}
// Compare 92 and 45 → Swap → {72, 5, 12, 45, 92}
// Largest element (92) is now in its correct position.
// Pass 2 (i = 1):
// Inner loop runs j = 0 to 2 (n - i - 1 = 3):
// Compare and swap adjacent elements:
// Compare 72 and 5 → Swap → {5, 72, 12, 45, 92}
// Compare 72 and 12 → Swap → {5, 12, 72, 45, 92}
// Compare 72 and 45 → Swap → {5, 12, 45, 72, 92}
// Second-largest element (72) is now in its correct position.
// Pass 3 (i = 2):
// Inner loop runs j = 0 to 1 (n - i - 1 = 2):
// Compare and swap adjacent elements:
// Compare 5 and 12 → No Swap
// Compare 12 and 45 → No Swap
// No swaps occurred, so the loop breaks early.
// Output:
// plaintext
// Copy code
// 5 12 45 72 92
// Final Output
// The sorted array is printed:

// plaintext
// Copy code
// 5 12 45 72 92
// This demonstrates the efficiency and correctness of the optimized Bubble Sort implementation.






// You said:
// ok good but explain this indepth Condition j < n - i - 1
// ChatGPT said:
// ChatGPT
// The condition j < n - i - 1 in the inner loop of the Bubble Sort algorithm is essential for optimizing the number of comparisons and ensuring correctness. Let’s break it down in-depth:

// Purpose of the Inner Loop
// The inner loop (for (int j = 0; j < n - i - 1; j++)) is responsible for comparing adjacent elements and swapping them if they are out of order.
// During each pass of the outer loop, the largest unsorted element is moved to its correct position at the end of the array.
// Why Use n - i - 1?
// Shrinking the Range of Comparisons:

// In Bubble Sort, after each pass of the outer loop (i-th pass), the largest element in the unsorted portion of the array is moved to its correct position.
// For example:
// After the first pass, the largest element is at index n - 1.
// After the second pass, the second-largest element is at index n - 2, and so on.
// This means the last i elements are already sorted after the i-th pass and do not need to be compared again.
// Condition j < n - i - 1:

// The inner loop ensures that comparisons and swaps are limited to the unsorted portion of the array.
// Explanation:
// n - 1 is the last index of the array.
// i represents the number of passes already completed (and thus the number of elements already sorted).
// n - i - 1 calculates the last unsorted index for the current pass.
// Why Not j < n - 1?
// If you use j < n - 1, the inner loop would unnecessarily compare elements that are already sorted after the i-th pass.
// This would result in redundant comparisons, wasting computation time without altering the result.
// Example Walkthrough
// Let’s go step-by-step with an array {92, 72, 5, 12, 45}.

// Pass 1 (i = 0):
// Condition for inner loop: j < n - i - 1 = 5 - 0 - 1 = 4.

// The inner loop compares indices:

// j = 0: Compare arr[0] (92) and arr[1] (72) → Swap → {72, 92, 5, 12, 45}.
// j = 1: Compare arr[1] (92) and arr[2] (5) → Swap → {72, 5, 92, 12, 45}.
// j = 2: Compare arr[2] (92) and arr[3] (12) → Swap → {72, 5, 12, 92, 45}.
// j = 3: Compare arr[3] (92) and arr[4] (45) → Swap → {72, 5, 12, 45, 92}.
// After this pass:

// The largest element (92) is placed at the last index (n - 1).
// No need to include index 4 in the next pass.
// Pass 2 (i = 1):
// Condition for inner loop: j < n - i - 1 = 5 - 1 - 1 = 3.

// The inner loop compares indices:

// j = 0: Compare arr[0] (72) and arr[1] (5) → Swap → {5, 72, 12, 45, 92}.
// j = 1: Compare arr[1] (72) and arr[2] (12) → Swap → {5, 12, 72, 45, 92}.
// j = 2: Compare arr[2] (72) and arr[3] (45) → Swap → {5, 12, 45, 72, 92}.
// After this pass:

// The second-largest element (72) is placed at index n - 2.
// No need to include indices 3 and 4 in the next pass.
// Pass 3 (i = 2):
// Condition for inner loop: j < n - i - 1 = 5 - 2 - 1 = 2.

// The inner loop compares indices:

// j = 0: Compare arr[0] (5) and arr[1] (12) → No Swap.
// j = 1: Compare arr[1] (12) and arr[2] (45) → No Swap.
// After this pass:

// The third-largest element (45) is placed at index n - 3.
// No need to include indices 2, 3, and 4 in the next pass.
// Pass 4 (i = 3):
// Condition for inner loop: j < n - i - 1 = 5 - 3 - 1 = 1.

// The inner loop compares indices:

// j = 0: Compare arr[0] (5) and arr[1] (12) → No Swap.
// After this pass:

// The fourth-largest element (12) is placed at index n - 4.
// The array is fully sorted.
// Key Insights
// Efficiency:

// The condition j < n - i - 1 ensures that we skip comparisons for elements that are already sorted.
// For an array of size n, the total comparisons are reduced from n(n-1)/2 to a smaller number depending on the array's state.
Correctness:

By limiting the range of j, the algorithm correctly focuses only on the unsorted portion of the array in each pass.
Optimization:

Combined with the swapped flag, this condition makes Bubble Sort more efficient, especially for nearly sorted arrays.
Conclusion
The condition j < n - i - 1 ensures that:

Only unsorted elements are compared in each pass.
The already sorted elements are skipped, reducing unnecessary comparisons and improving performance.