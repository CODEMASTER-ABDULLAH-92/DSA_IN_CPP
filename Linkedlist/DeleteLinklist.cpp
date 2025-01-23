// // Delete from Start 

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
// Node *head = NULL;
// Node *tail=NULL;
// int arr[] = {1,2,3,4,5};
// for(int i =0; i< 5; i++){
//     if (head == NULL)
//     {
//         head = new Node(arr[i]);
//         tail = head;
//     }
//     else
//     {
//         tail -> next = new Node(arr[i]);
//         tail = tail -> next;
//     }
// }
// //Delete a 1st Node
// Node *dele = head;
// head = head -> next;
// delete dele;

// //Printing 
// Node *print = head;
// while (print)
// {
//     cout<<print -> data<<" -> ";
//     print = print -> next;
// }

// return 0;
// }




// Delete last Node 


// #include<iostream>
// #include<vector>
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
// Node *head = NULL;
// Node *tail = NULL;
// int arr[] ={1,2,3};
// for(int i =0; i < 3; i++){
//     if (head == NULL)
//     {
//         head = new Node(arr[i]);
//         tail = head;
//     }
//     else
//     {
//         tail -> next = new Node(arr[i]);
//         tail = tail -> next;
//     }
// }
// if (head != NULL)
// {
//     if (head -> next == NULL)
//     {
//         Node *temp = head;
//         delete temp;
//         head = NULL;
//     }
//     else
//     {
//         Node *curr = head;
//         Node *prev = NULL;
//         while (curr -> next != NULL)
//         {
//             prev = curr;
//             curr = curr -> next;
//         }
//         prev -> next = curr -> next;
//         delete curr;
//     }
    
// }
// Node *temp = head;
// while (temp)
// {
//     cout<<temp -> data<<" ";
//     temp = temp -> next;
// }
// return 0;
// }





// Delete at the middle 

#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int value){
    data = value;
    next = NULL;
}
};
int main(){
Node *head = NULL;
Node *tail = NULL;
int arr[] = {1,2,3,4,5};
for(int i =0; i<5; i++){
    if (head == NULL)
    {
        head = new Node(arr[i]);
        tail = head;
    }
    else
    {
        tail -> next = new Node(arr[i]);
        tail = tail -> next;
    }
}


//Delete from middle 
Node *prev = NULL;
Node *curr = head;
int y =1;

if ( y == 1)
{
    Node *temp = head;
    head = head -> next;
    delete temp;
}
else
{
    y--;
while (y--)
{
    prev = curr;
    curr = curr -> next;
}
prev -> next = curr -> next;
delete curr;
}




//Printing 
Node *print = head;
while (print != NULL)
{
    cout<<print -> data<<" ";
    print = print -> next;
}
return 0;
}