#include <bits/stdc++.h>
using namespace std;

// Node class for Doubly Linked List
class Node {
public:
    int data;
    Node* next;
    Node* prev;  // pointer to previous node

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Insert at end of DLL
void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);

    // If list is empty, new node becomes head
    if (head == NULL) {
        head = newNode;
        return;
    }

    // Traverse to the last node
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Link the new node at the end
    temp->next = newNode;
    newNode->prev = temp;  // set previous pointer
}

// Print DLL forward
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// // Print DLL in reverse
// void printReverse(Node* head) {
//     if (head == NULL) return;

//     // Go to last node
//     Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }

//     // Traverse backwards
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->prev;
//     }
//     cout << "NULL" << endl;
// }

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10); // List: 10
    insertAtEnd(head, 20); // List: 10 -> 20
    insertAtEnd(head, 30); // List: 10 -> 20 -> 30

    cout << "Forward: ";
    printList(head);       // Output: 10 20 30 NULL

    // cout << "Reverse: ";
    // printReverse(head);    // Output: 30 20 10 NULL

    return 0;
}
