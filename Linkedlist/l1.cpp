// ===========================        Creation of the Node

// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// int main(){

// Node *Head = new Node(4);
// cout<<Head -> data<<endl;
// cout<<Head -> next<<endl;
// return 0;
// }

// // Insertion At the Stating of the Node ================

// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int value)
//     {
//         data = value;
//         next = NULL;
//     }
// };

// int main()
// {
//     Node *Head = NULL;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int i = 0; i < 5; i++)
//     {
//         if (Head == NULL)
//         {
//             Head = new Node(arr[i]);
//         }
//         else
//         {
//             Node *temp = new Node(arr[i]);
//             temp->next = Head;
//             Head = temp;
//         }
//     }
//     Node *temp = Head;
//     while (temp)
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     return 0;
// }







// ============= Insertion at the end of the Node 



// #include<iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node *next;
//     Node(int value){
//         data = value;
//         next = NULL;
//     }
// };
// int main(){
// Node *Head = NULL;
// Node *Tail = NULL;
// int arr[] ={1,2,3,4,5,6};
// for(int i =0; i < 6; i++){
// if (Head == NULL)
// {
//     Head = new Node(arr[i]);
//     Tail = Head;
// }
// else
// {
//     Tail -> next = new Node(arr[i]);
//     Tail = Tail -> next;
// }
// }
// Node *temp = Head;
// while (temp)
// {
//     cout<<temp -> data<<" -> ";
//     temp = temp -> next;
// }

// return 0;
// }



// ====================== >>>>>>>> Insertion at Middle 


#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    
    // Constructor to initialize a new node
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main() {
    Node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5};


    for (int i = 0; i < 5; i++) {
        Node *newNode = new Node(arr[i]);
        newNode->next = head; 
        head = newNode;       
    }

    // Inserting a value in the middle (after the 3rd node)
    int position = 3;
    int value = 12;

    Node *temp = head;
    while (--position)
    {
        temp = temp -> next;
    }
    Node *newNode = new Node(value);
    newNode -> next = temp -> next;
    temp -> next = newNode; 

    
    // Printing the linked list
    Node *temp2 = head;
    while (temp2 != NULL) {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }
    cout << endl;

    return 0;
}