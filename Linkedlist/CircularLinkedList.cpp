#include <iostream>
using namespace std;

class Node {
public:
    int info;
    Node* Link;

    Node(int x) {
        info = x;
        Link = NULL;
    }
};

class CircularLinkedList {
public:
    Node* Start;

    CircularLinkedList() {
        Start = NULL;
    }

    void createNode(int x) {
        Node* newNode = new Node(x);
        if (Start == NULL) {
            Start = newNode;
            newNode->Link = Start;
        } else {
            Node* temp = Start;
            while (temp->Link != Start) {
                temp = temp->Link;
            }
            temp->Link = newNode;
            newNode->Link = Start;
        }
    }

    void traverse() {
        if (Start == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = Start;
        do {
            cout << temp->info << " ";
            temp = temp->Link;
        } while (temp != Start);
        cout << endl;
    }

    void SearchList(int item) {
        if (Start == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = Start;
        do {
            if (temp->info == item) {
                cout << "Item found at node with info: " << temp->info << endl;
                return;
            }
            temp = temp->Link;
        } while (temp != Start);
        cout << "Item not found" << endl;
    }

    void DeleteNode(int item) {
        if (Start == NULL) {
            cout << "List is empty" << endl;
            return;
        }

        Node *LOC = NULL, *LOCP = NULL;
        Node* temp = Start;

        // Locate the node to delete and its previous node
        do {
            if (temp->Link->info == item) {
                LOCP = temp;
                LOC = temp->Link;
                break;
            }
            temp = temp->Link;
        } while (temp != Start);

        if (LOC == NULL) {
            cout << "Item not found in list" << endl;
            return;
        }

        if (LOC == Start) { // Deleting the start node
            Node* last = Start;
            while (last->Link != Start) {
                last = last->Link;
            }
            if (Start == Start->Link) { // Only one node
                delete Start;
                Start = NULL;
            } else {
                last->Link = Start->Link;
                Start = Start->Link;
                delete LOC;
            }
        } else { // Deleting a non-start node
            LOCP->Link = LOC->Link;
            delete LOC;
        }
    }
};

int main() {
    CircularLinkedList obj;
    obj.createNode(11);
    obj.createNode(12);
    obj.createNode(13);

    obj.traverse();

    obj.SearchList(13);

    obj.DeleteNode(12);
    obj.traverse();

    return 0;
}
