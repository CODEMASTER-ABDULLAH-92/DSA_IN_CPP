// #include<iostream>
// #include<vector>
// using namespace std;
// void printArr(vector<int> &v,int n){
//     for(int i =0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
// }
// void selectionSort(vector<int> &v, int n){
//     for(int i =0; i<n-1; i++){
//         int minIndex = i;
//         for(int j = i + 1; j < n; j++){
//             if (v[j] < v[minIndex])
//             {
//                 minIndex = j;
//             };
//         };
//         swap(v[minIndex],v[i]);
//     }
// }
// int main(){
//     vector<int> v;
//     v.push_back(77);
//     v.push_back(35);
//     v.push_back(83);
//     v.push_back(21);
//     v.push_back(03);
//     selectionSort(v,v.size());
//     printArr(v,v.size());
// return 0;
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// void printArr(vector<int> &v, int n){
//     for(int i =0; i < n; i++){
//         cout<<v[i]<<" ";
//     }
// }
// int  linearSearch(vector<int> &v, int n, int key){
//     for(int i =0; i < n; i++){
//         if(v[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
// vector<int> v;
// v.push_back(74);
//     v.push_back(35);
//     v.push_back(83);
//     v.push_back(21);
//     v.push_back(03);
//     // printArr(v,v.size());
//     int searched = linearSearch(v,v.size(),83);
//     cout<<"Searched = "<<searched;
// return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// void printArr(vector<int> &v,int n){
//     for(int i =0; i< n; i++){
//         cout<<v[i]<<" ";
//     }
// }
// void bubbleSort(vector<int> &v, int n){
//     for(int i =0; i<n; i++){
//         int j = 0;
//         for(j; j < n - i - 1; j++){
//             if (v[j+ 1] < v[j])
//             {
// swap(v[j],v[j+1]);
//             }
//         }
//     }
// }
// int main(){
// vector<int> v;
// v.push_back(93);
// v.push_back(23);
// v.push_back(43);
// v.push_back(21);
// v.push_back(43);
// bubbleSort(v,v.size());
// printArr(v,v.size());
// return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int binarySearch(vector<int> &v, int n,int key){
//     int start =0;
//     int end = n-1;
//     int mid = start + (end - start) / 2; 
//     while (start<=end)
//     {
//         if (v[mid] == key)
//         {
//             return key;
//         }
//         if (v[mid] > key)
//         {
//             end = mid -1;
//         }
//         if (v[mid] < key)
//         {
//             start = mid + 1;
//         }
//         mid = start + (end - start)/2;
//     }
//     return -1;
// }
// int main(){
// vector<int> v;
// v.push_back(2);
// v.push_back(12);
// v.push_back(22);
// v.push_back(25);
// v.push_back(29);
// v.push_back(30);
// v.push_back(40);
// v.push_back(45);
// v.push_back(56);
// v.push_back(66);
// v.push_back(70);
// v.push_back(88);
// v.push_back(99);
// v.push_back(100);
// v.push_back(112);
// v.push_back(222);
// v.push_back(269);
// int bin = binarySearch(v,v.size(),99);
// cout<<"Binary Search: "<<bin;
// return 0;
// }




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
//         tail -> next = new Node(arr[i]);
//         tail = tail -> next;
//     }
// }
// int x = 3;
// x--;
// int value = 30;
// Node *temp2 = head;
// while (x--)
// {
//     temp2 = temp2 -> next;
// }
// Node *temp3 = new Node(value);

// temp3 -> next = temp2 -> next;
// temp2 -> next = temp3;

// Node *temp = head;
// while (temp)
// {
//     cout<<temp -> data <<" -> ";
//     temp = temp -> next;
// }

// return 0;
// }


//Binary Tree problems 



#include <iostream>
// using namespace std;

// // TreeNode class definition
// class TreeNode {
// public:
//     char info;       // Name of the node
//     TreeNode* left;  // Pointer to the left child
//     TreeNode* right; // Pointer to the right child

//     // Constructor
//     TreeNode(char in) {
//         info = in;
//         left = nullptr;
//         right = nullptr;
//     }
// };

// // Inorder traversal function (Left -> Tree -> Right)
// void inorderTraversal(TreeNode* node) {
//     if (node) {
//         inorderTraversal(node->left);
//         cout << node->info << " ";
//         inorderTraversal(node->right);
//     }
// }

// int main() {
//     // Create tree nodes
//     TreeNode* A = new TreeNode('A');
//     TreeNode* B = new TreeNode('B');
//     TreeNode* C = new TreeNode('C');
//     TreeNode* D = new TreeNode('D');
//     TreeNode* E = new TreeNode('E');
//     TreeNode* F = new TreeNode('F');
//     TreeNode* G = new TreeNode('G');
//     TreeNode* H = new TreeNode('H');
//     TreeNode* K = new TreeNode('K');

//     // Connect nodes to form the tree
//     A->left = B;
//     A->right = C;
//     B->left = D;
//     C->left = E;
//     C->right = F;
//     D->left = G;
//     G->left = H;
//     G->right = K;

//     // Perform inorder traversal to verify the tree structure
//     cout << "Inorder Traversal of the Tree: ";
//     inorderTraversal(A);
//     cout << endl;

//     return 0;
// }

// G K H D B E F C A

// #include<iostream>
// using namespace std;
// class Tree{
//     public:
//     char info;
//     Tree *left;
//     Tree *right;
//     Tree(char in){
//         info = in;
//         left = right = nullptr;
//     }
// };
// void postOrder(Tree *root){
//     if (root == NULL)
//     {
//         return;
//     }
//     postOrder(root -> left);
//     postOrder(root -> right);
//     cout<<root->info<<" ";
// }
// int main(){
// Tree *A = new Tree('A'); 
// Tree *B = new Tree('B'); 
// Tree *C = new Tree('C'); 
// Tree *D = new Tree('D'); 
// Tree *E = new Tree('E'); 
// Tree *F = new Tree('F'); 
// Tree *G = new Tree('G');
// Tree *H = new Tree('H');
// Tree *K = new Tree('K');
// //Connect the Nodes 
// A->left = B;
// A-> right = C;
// B->left = D;
// D->left = G;
// D->right = H;
// H-> right = K;
// C->left = E;
// C->right = F;
// cout<<"Post Order Traversal: ";  
// postOrder(A);
// return 0;
// }

// #include<iostream>
// using namespace std;
// class Tree{
//     public:
//     char Info;
//     Tree *left;
//     Tree *right;
//     Tree(char in){
//         Info = in;
//         left = right = nullptr;
//     }
// };
// void Inorder(Tree *root){
//     if (root == nullptr)
//     {
//         return;
//     }
//     Inorder(root -> left);
//     cout<<root ->Info<<" ";
//     Inorder(root -> right);
// }
// int main(){
// Tree *A = new Tree('A');
// Tree *B = new Tree('B');
// Tree *C = new Tree('C');
// Tree *D = new Tree('D');
// Tree *E = new Tree('E');
// Tree *F = new Tree('F');
// Tree *G = new Tree('G');
// Tree *H = new Tree('H');
// Tree *K = new Tree('K');
// //connecting
// A -> left = B;
// A -> right = C;
// B->left = D;
// D->left = G;
// D->right = H;
// H->right = K;
// C->left = E;
// C->right = F;
// cout<<"In Order Traversing: ";
// Inorder(A);
// return 0;
// }

// #include<iostream>
// using namespace std;
// class Tree{
//     public:
//     char Info;
//     Tree *left;
//     Tree *right;
//     Tree(char in){
//         Info = in;
//         left = right = nullptr;
//     }
// };
// Tree *BinaryTree(){
//     char ch;
//     cin>>ch;
//     if (ch == '@')
//     {
//         return nullptr;
//     }
//     Tree *temp = new Tree(ch);
//     cout<<"Enter the left child of "<<ch<<" :";
//     temp -> left = BinaryTree();
//     cout<<"Enter the right child of "<<ch<<" :";
//     temp -> right = BinaryTree();
//     return temp;
// }
// void PreOrder(Tree *root){
//     if (root == nullptr)
//     {
//         return;
//     }
//     cout<<root -> Info<<" ";
//     PreOrder(root -> left);
//     PreOrder(root -> right);
// }
// void Inorder(Tree *root){
//     if (root == nullptr)
//     {
//         return;
//     }
//     Inorder(root -> left);
//     cout<<root->Info<<" ";
//     Inorder(root -> right);
// }
// void PostOrder(Tree *root){
//     if (root == nullptr)
//     {
//         return;
//     }
//         PostOrder(root -> left);
//         PostOrder(root -> right);
//         cout<<root -> Info<<" ";
// }
// int main(){
//     cout<<"Enter the root:";
// Tree *root = BinaryTree();
// cout<<"PreOrder: ";
// PreOrder(root);
// cout<<"Inorder: "; 
// Inorder(root);
// cout<<"Post Order: ";
// PostOrder(root);
// return 0;
// }



