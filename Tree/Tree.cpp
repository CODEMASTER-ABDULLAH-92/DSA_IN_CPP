// #include <iostream>
// using namespace std;

// class Tree {
// public:
//    char info;
//     Tree *left;
//     Tree *right;

//     Tree(char in) {
//         left = right = 0;
//         info =in;
//     }
// };

// // Inorder Traversal (Left -> Root -> Right)
// void inorder(Tree *node) {
//     if (node) {
//         inorder(node->left);
//         cout << node->info << " ";
//         inorder(node->right);
//     }
// }

// int main(){
	
// 	Tree *Root;
// 	Root = new Tree('A');
// 	Root->left = new Tree('B');
// 	Root->left->left =new Tree('D');
// 	Root->left->right = new Tree('E');
// 	Root->left->right->left = new Tree('F');
// 	Root->right =new Tree('C');
// 	Root->right->left =new Tree('G');
// 	Root->right->right = new Tree('H');
// 	Root->right->right->left = new Tree('J');
// 	Root->right->right->left->left = new Tree('L');
// 	Root->right->right->right = new Tree ('K');
	
// 	cout << "Inorder Traversal: ";
//     inorder(Root);
//     cout << endl;
// }




// #include<iostream>
// using namespace std;
// class Node{
// public:
// int data;
// Node *left,*right;
// Node(int value){
//     data = value;
//     left = right = NULL;
// }
// };
// Node *binaryTree(){
//     int x;
//     cin>>x;
//     if( x == -1 )
//     return NULL;
//     Node *temp = new Node(x);
//     cout<<"Enter the left child of "<<x<<" :";
//     temp -> left = binaryTree();
//     cout<<"Enter the right child of "<<x<<" :";
//     temp -> right = binaryTree();
//     return temp;
// }

// void inorder(Node* node) {
//     if (node) {
//         inorder(node->left);
//         cout << node->data << " ";
//         inorder(node->right);
//     }
// }
// int main(){
// cout<<"Enter the Root Node: ";
// Node *root;
// root = binaryTree();
//     cout << "Inorder Traversal: ";
//     inorder(root);
//     cout << endl;

// return 0;
// }


// #include<iostream>
// using namespace std;
// class Tree{
//     public:
//     char data;
//     Tree *left;
//     Tree *right;
//     Tree(char value){
//         data = value;
//         left = right =NULL;
//     }
// };
// Tree *binaryTree(){
//     char x;
//     cin>>x;
//     if (x == '#')
//     {
//         return NULL;
//     }
    
//     Tree *temp = new Tree(x);
//     cout<<"Enter the left Child of "<<x<<" :";
//     temp -> left = binaryTree();
//     cout<<"Enter the right Child of "<<x<<" :";
//     temp -> right = binaryTree();
//     return temp;
// }
// void inOrder(Tree *tree){
//    if(tree){
//      inOrder(tree -> left);
//     cout<<tree -> data<<" ";
//     inOrder(tree -> right);
//    }
// }
// int main(){
//     cout<<"Enter the Root ";
// Tree *root = binaryTree();
// cout<<"Inorder Traversla ";
// inOrder(root);
// cout<<endl;
// return 0;
// }

    //          A
    //       B     C  
    //     C      E   F
    //    D 
    //   G  H
    //        K 












//Practical Example

//     #include <iostream>
// using namespace std;

// class Tree {
// public:
//     char info;
//     Tree* left;
//     Tree* right;

//     Tree(char in) {
//         left = right = nullptr;
//         info = in;
//     }
// };

// // Inorder Traversal (Left -> Root -> Right)
// void inorder(Tree* node) {
//     if (node) {
//         inorder(node->left);
//         cout << node->info << " ";
//         inorder(node->right);
//     }
// }

// int main() {
//     // Creating the tree structure
//     Tree* Root;
//     Root = new Tree('A');
//     Root->left = new Tree('B');
//     Root->right = new Tree('C');

//     Root->left->left = new Tree('D');
//     Root->right->left = new Tree('E');
//     Root->right->right = new Tree('F');

//     Root->left->left->left = new Tree('G');
//     Root->left->left->left->left = new Tree('H');
//     Root->left->left->left->right = new Tree('K');

//     // Performing in-order traversal
//     cout << "Inorder Traversal: ";
//     inorder(Root);
//     cout << endl;

//     return 0;
// }


// #include <iostream>
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

// // Inorder traversal function (Left -> Root -> Right)
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






//Insertion in the binary tree 




// #include<iostream>
// using namespace std;
// class Tree{
//     public:
//     int Info;
//     Tree *left;
//     Tree *right;
//     Tree(int in){
//         Info = in;
//         left = right = nullptr;
//     }
// };
// Tree *InsertTree(Tree *root,int target){
// if (!root)
// {
//     Tree *temp = new Tree(target);
//     return temp;
// }
// if (target < root -> Info)
// {
//     root -> left = InsertTree(root->left,target);
// }
// else{
//     root -> right = InsertTree(root-> right,target);
// }
// return root;
// }
// //In-Oerder Traversal
// void Inorder(Tree *root){
//     if (root == nullptr)
//      return;
//     Inorder(root -> left);
//     cout<<root->Info<<" ";
//     Inorder(root -> right);
// }
// int main(){
// Tree *root = nullptr;  // Initialize the root pointer to nullptr
// root = InsertTree(root, 22);
// InsertTree(root,4);
// InsertTree(root,22);
// cout<<"In-Order Traversal:";
// Inorder(root);

// return 0;
// }


#include<iostream>
using namespace std;
class Tree{
    public:
    int data;
    Tree *left;
    Tree *right;
    Tree(int value){
        data = value;
        left = right = nullptr;
    }
};
Tree *Insert(Tree *root,int target){
    if (!root)
    {
        Tree *temp = new Tree(target);
        return temp;
    }
    if (target > root -> data)
    {
        root -> right = Insert(root->right,target);
    }
    else{
        root -> left = Insert(root -> left, target);
    }
    return root;
}
//PreOrder Traversal
void preOrder(Tree *root){
    if (root == nullptr)
    {
        return;
    }
    cout<<root->data<<" ";
    preOrder(root ->left);
    preOrder(root -> right);
}
int main(){
Tree *root = nullptr;
root = Insert(root,92);
Insert(root,45);
Insert(root,12);
cout<<"Before Inserted Traversal: ";
preOrder(root);
Insert(root,72);
cout<<"After Inserted Traversal: ";
preOrder(root);
return 0;
}