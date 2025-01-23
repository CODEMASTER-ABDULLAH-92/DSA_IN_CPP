ude<iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node *next, *prev;
//     Node(int value) {
//         data = value;
//         next = prev = NULL;
//     }
// };

// int main() {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int arr[] = {1, 2, 3, 4};

//     // Creating the doubly linked list
//     for (int i = 0; i < 4; i++) {
//         if (head == NULL) {
//             head = new Node(arr[i]);
//             tail = head;
//         } else {
//             Node *temp = new Node(arr[i]);
//             temp->prev = tail;
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     // Deletion at middle (position x)
//     int x = 0;  // Position to delete
//     if (head != NULL) {
//         if (x == 0) {
//             // Deletion at the start
//             Node *temp = head;
//             head = head->next;
//             if (head != NULL) {
//                 head->prev = NULL;
//             }
//             delete temp;
//         } else {
//             // Deletion at middle
//             x--;
//             Node *current = head;
//             while (x--) {
//                 current = current->next;
//             }
//             // Update the previous and next pointers
//             if (current->next != NULL) {
//                 current->prev->next = current->next;
//                 current->next->prev = current->prev;
//             } else { 
//                 // If deleting the last node, update tail
//                 current->prev->next = NULL;
//                 tail = current->prev;
//             }
//             delete current;
//         }
//     }

//     // Printing the list after deletion
//     Node *temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     return 0;
// }
