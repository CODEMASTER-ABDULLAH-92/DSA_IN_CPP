// //Insertion at the start Double LinkedList 
// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int value){
//         data = value;
//         next = NULL;
//         prev = NULL;
//     }
// };
// int main(){
// Node *head = NULL;
// int arr[] = {1,2,3};
// for(int i =0; i<3; i++){
//     if (head == NULL)
//     {
//         head = new Node(arr[i]);
//     }
//     else
//     {
//         Node *temp = new Node(arr[i]);
//         temp -> next = head;
//         head -> prev = temp;
//         head = temp;
//     }
// }
// //printing

// Node *temp = head;
// while (temp)
// {
//     cout<<temp -> data<<" ";
//     temp = temp -> next;
// }
// return 0;
// }

// // Insert at the end

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int value){
// data = value;
// next = prev = NULL;
//     }
// };
// int main(){
// Node *head = NULL;
// Node *tail = NULL;
// int arr[] = {1,2,3,4,5};
// for(int i =0; i<5; i++){
//     if (head == NULL)
//     {
//         head = new Node(arr[i]);
//         tail = head;
//     }
//     else
//     {
//         Node *temp = new Node(arr[i]);
//         tail -> next = temp;
//         temp -> prev = tail;
//         tail = temp;
//     }
// }
// //printing

// Node *travers = head;
// while (travers)
// {
//     cout<<travers -> data<<" ";
//     travers = travers -> next;
// }

// return 0;
// }

// // Insert at the middle

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;
//     Node(int value)
//     {
//         data = value;
//         next = prev = NULL;
//     }
// };
// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     int arr[] = {1, 2, 3, 4};
//     for (int i = 0; i < 4; i++)
//     {
//         if (head == NULL)
//         {
//             head = new Node(arr[i]);
//             tail = head;
//         }
//         else
//         {
//             Node *temp = new Node(arr[i]);
//             tail->next = temp;
//             temp->prev = tail;
//             tail = temp;
//         }
//     }

//     // Insert at the Middle
//     int x = 2;
//     if (x == 0)
//     {
//         if (head == NULL)
//         {
//             head = new Node(4);
//         }
//         else
//         {
//             Node *temp = new Node(4);
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
//     else
//     {
//         x--;
//         Node *current = head;
//         while (x--)
//         {
//             current = current->next;
//         }
//         // Insert at end
//         if (current->next == NULL)
//         {
//             Node *temp = new Node(5);
//             temp->prev = current;
//             current->next = temp;
//         }
//         // insert at middle
//         else
//         {
//             Node *newNode = new Node(44);
//             newNode->next = current->next;
//             current->next = newNode;
//             newNode->prev = current;
//             newNode->next->prev = newNode;
//         }
//     }

//     // Printing
//     Node *print = head;
//     while (print)
//     {
//         cout << print->data << " ";
//         print = print->next;
//     }

//     return 0;
// }



// All type of insertion is here 


// using namespace std;
// class Node
// #include <iostream>
// {
// public:
//     int data;
//     Node *previous, *next;
//     Node(int value)
//     {
//         data = value;
//         next = previous = NULL;
//     }
// };
// int main()
// {
//     Node *head = NULL;
//     int arr[] = {1, 2, 3, 4};
//     // Insert at the start
//     //  for(int i =0; i<4; i++){
//     //      if (head == NULL)
//     //      {
//     //          head = new Node(arr[i]);
//     //      }
//     //      else
//     //      {
//     //          Node *temp = new Node(arr[i]);
//     //          temp -> next = head;
//     //          head -> previous = temp;
//     //          head = temp;
//     //      }
//     //  }

//     // Insert at the end
//     Node *tail = NULL;
//     for (int i = 0; i < 4; i++)
//     {
//         if (head == NULL)
//         {
//             head = new Node(arr[i]);
//             tail = head;
//         }
//         else
//         {
//             Node *temp = new Node(arr[i]);
//             temp->previous = tail;
//             tail->next = temp;
//             tail = temp;
//         }
//     }

//     //Insert at the middle

//     int x = 2;
//     x--;
//     int value = 30;
//     Node *current = head;
//     while (x--)
//     {
//         current = current -> next;
//     }
//     if (x == 0)
//     {
//         if (head == NULL)
//         {
//             head = new Node(value);
//         }
//         else
//         {
//             Node *temp = new Node(value);
//             temp -> previous = head;
//             head -> next = temp;
//             head = temp;
//         }
//     }
//     else
//     {
//         if (current -> next == NULL)
//         {
//             Node *temp = new Node(value);
//             temp -> previous = current;
//             current -> next = temp;
//         }
//         else
//         {
//             Node *temp = new Node(value);
//             temp -> next = current -> next;
//             temp -> previous = current;
//             current -> next = temp;
//             temp -> next -> previous = temp;
//         }
//     }

//     Node *print = head;
//     while (print)
//     {
//         cout << print->data << " ";
//         print = print->next;
//     }

//     return 0;
// }




// // Deletion at the start

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next,*prev;
//     Node(int value){
//         data = value;
//         next = prev = NULL;
//     }
// };
// int main(){
// Node *head = NULL;
// Node *tail = NULL;
// int arr[] = {1,2,3,4};
// for(int i = 0; i<4; i++){
// if (head == NULL)
// {
//     head = new Node(arr[i]);
//     tail = head;
// }
// else
// {
//     Node *temp = new Node(arr[i]);
//     temp -> prev = tail;
//     tail -> next = temp;
//     tail = temp;
// }
// }
// // Deletion at start
// if (head != NULL)
// {
//     //If only one Node exist
//     if (head -> next == NULL)
//     {
//         delete head;
//         head = NULL;
//     }
//     //If more than one node exist
//     else
//     {
//         Node *temp = head;
//         head = head -> next;
//         delete  temp;
//         head -> prev = NULL;
//     }

// }

// //Printing
// Node *print = head;
// while (print)
// {
//     cout<<print -> data<<" ";
//     print= print-> next;
// }

// return 0;
// }



// Deletion at end
// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next, *prev;
//     Node(int value)
//     {
//         data = value;
//         next = prev = NULL;
//     }
// };
// int main()
// {

//     Node *head = NULL;
//     int arr[] = {1, 2, 3, 4};
//     for (int i = 0; i < 4; i++)
//     {
//         if (head == NULL)
//         {
//             head = new Node(arr[i]);
//         }
//         else
//         {
//             Node *temp = new Node(arr[i]);
//             temp->next = head;
//             head->prev = temp;
//             head = temp;
//         }
//     }
//     // Delete the last Node
//     if (head != NULL)
//     {
//         if (head->next == NULL)
//         {
//             delete head;
//             head = NULL;
//         }
//         else
//         {
//             Node *current = head;
//             while (current->next != NULL)
//             {
//                 current = current->next;
//             }
//             current->prev->next = NULL;
//             delete current;
//         }
//     }
//     // printing
//     Node *print = head;
//     while (print)
//     {
//         cout << print->data << " ";
//         print = print->next;
//     }
//     return 0;
// }




// Deletion at middle


// #include<iostream>
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


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next, *prev;
    Node(int value){
        data = value;
        next = prev = nullptr;
    }
};
int main(){
Node *head = NULL;
int arr[] = {1,2,3,4};
for(int i =0; i<4;i++){
    if (head == NULL)
    {
        head = new Node(arr[i]);
    }
    else{
        Node *temp = new Node(arr[i]);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}

// Deletion 
int jumps = 2;
Node *current = head;
while (jumps--)
{
    current = current -> next;
}
if (head != nullptr)
{
    if (jumps == 0)
    {
        Node *temp = head;
        head = head -> next;
        if (head != nullptr)
        {
            head -> prev = nullptr;
        }
        delete temp;
    }
    else
    {
        // Middle 
        if (current -> next != nullptr)
        {
             current->prev->next = current->next;
                current->next->prev = current->prev;
            // current -> next -> prev = current->
        }
        else{
              current->prev->next = NULL;
        }
    }
    
}

Node *print = head;
while (print)
{
    cout<<print -> data <<" ";
    print = print -> next;
}
return 0;
}
