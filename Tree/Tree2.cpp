// #include <iostream>
// using namespace std;

// class Tree {
// public:
//     char Info;
//     Tree* left;
//     Tree* right;
    
//     Tree(char in) {
//         Info = in;
//         left = right = nullptr;
//     }
// };

// Tree* BinarySearch() {
//     char ch;
//     cout << "Enter node (or $ to indicate no node): ";
//     cin >> ch;
    
//     if (ch == '$') {
//         return nullptr;
//     }
    
//     Tree* temp = new Tree(ch);
    
//     cout << "Enter the left child of " << ch << ": ";
//     temp->left = BinarySearch();
    
//     cout << "Enter the right child of " << ch << ": ";
//     temp->right = BinarySearch();
    
//     return temp;
// }

// void PreOrder(Tree* root) {
//     if (root == nullptr) {
//         return;
//     }
    
//     cout << root->Info << " ";
//     PreOrder(root->left);
//     PreOrder(root->right);
// }

// int main() {
//     Tree* root = BinarySearch();
    
//     cout << "Pre Order Traversal: ";
//     PreOrder(root);
    
//     return 0;
// }



// IN Order - Traversal 




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
// Tree *BinarySearch(){
//     char ch;
//     cin>>ch;
//     if (ch == '$')
//     {
//         return nullptr;
//     }
//     Tree *temp = new Tree(ch);
//     cout<<"Enter the left child of "<<ch<<" :";
//     temp -> left = BinarySearch();
//     cout<<"Enter the right child of "<<ch<<" :";
//     temp -> right = BinarySearch();
//     return temp;
// }
// //In Order Traversal
// void Inorder(Tree *root){
//     if (root == nullptr)
//     {
//         return;
//     }
//     Inorder(root -> left);
//     cout<<root->Info<<" ";
//     Inorder(root -> right);
// }
// int main(){
//     cout<<"Enter the Root Node:";
// Tree *root = BinarySearch();
// cout<<"Inorder Traveral: ";
// Inorder(root);
// cout<<endl;
// return 0;
// }



// Post - Order 

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
// Tree *BinarySearch(){
//     char ch;
//     cin>>ch;
//     if (ch == '1')
//     {
//         return nullptr;
//     }
//     Tree *temp = new Tree(ch);
//     cout<<"Enter the left of child: "<<ch<<" :";
//     temp -> left = BinarySearch();
//     cout<<"Enter the right of child: "<<ch<<" :";
//     temp -> right = BinarySearch();
//     return temp;
// }
// void post(Tree *root){
//     if (root == nullptr)
//     {
//         return;
//     }
//     post(root -> left);
//     post(root -> right);
//     cout<<root->Info<<" ";
// }
// int main(){
// cout<<"Enter the root Node: ";
// Tree *root = BinarySearch();
// cout<<"Post order Traversal: ";
// post(root);
// return 0;
// }













#include <iostream>
using namespace std;

class Tree {
public:
    char Info;
    Tree *left, *right;
    Tree(char in) {
        Info = in;
        left = right = nullptr;
    }
};

Tree* BinarySearch() {
    char ch;
    cin >> ch;
    if (ch == '1') {
        return nullptr;
    }
    Tree *temp = new Tree(ch);
    cout << "Enter the left child of " << ch << ": ";
    temp->left = BinarySearch();
    cout << "Enter the right child of " << ch << ": ";
    temp->right = BinarySearch();
    return temp;
}

void post(Tree *root) {
    if (root == nullptr) {
        return;
    }
    post(root->left);
    post(root->right);
    cout << root->Info << " ";
}

void deleteTree(Tree* root) {
    if (root == nullptr) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    cout << "Note: Enter '1' for no child.\n";
    cout << "Enter the root Node: ";
    Tree *root = BinarySearch();

    if (root == nullptr) {
        cout << "The tree is empty.\n";
        return 0;
    }

    cout << "Post order Traversal: ";
    post(root);
    cout << endl;

    deleteTree(root); // Free allocated memory
    return 0;
}
