#include <bits/stdc++.h>
using namespace std;

// Node class for Doubly Linked List
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Insert at given position (1-based index)
void insertAtPos(Node* &head, int pos, int val) {

    Node* newNode = new Node(val);

    // Insert at beginning
    if (pos == 1) {
        newNode->next = head;
        if (head != NULL)
            head->prev = newNode;
        head = newNode;
        return;
    }

    Node* temp = head;

    // Traverse to (pos-1)th node
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // If position is out of range
    if (temp == NULL) return;

    // Linking the new node
    newNode->next = temp->next;
    newNode->prev = temp;

    // If not inserting at the end
    if (temp->next != NULL)
        temp->next->prev = newNode;

    temp->next = newNode;
}

// Print DLL forward
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL)
            cout << " <-> ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {

    // Creating initial list: 1 <-> 2 <-> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(4);
    head->next->next->prev = head->next;

    // Insert 3 at position 3
    insertAtPos(head, 3, 3);

    printList(head);

    return 0;
}
