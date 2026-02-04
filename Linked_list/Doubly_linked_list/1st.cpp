// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     // To store the Value or data
//     int data;

//     // Pointer to point the Previous Element
//     Node* prev;

//     // Pointer to point the Next Element
//     Node* next;

//     // Constructor
//     Node(int d) {
//         data = d;
//         prev = nullptr;
//         next = nullptr;
//     }
// };






// int main() {
//     // Create the first node (head of the list)
//     Node* head = new Node(10);

//     // Create and link the second node
//     head->next = new Node(20);
//     head->next->prev = head;

//     // Create and link the third node
//     head->next->next = new Node(30);
//     head->next->next->prev = head->next;

//     // Create and link the fourth node
//     head->next->next->next = new Node(40);
//     head->next->next->next->prev = head->next->next;

//     // Traverse the list forward and print elements
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data;
//         if (temp->next != nullptr) {
//             cout << " <-> ";
//         }
//         temp = temp->next;
//     }

//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

// Node class for Doubly Linked List
class Node {
public:
    int data;
    Node* next;
    Node* prev; // pointer to previous node

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// Insert at beginning of DLL
void insertAtBeg(Node* &head, int val) { 
    Node* newNode = new Node(val);

    // Step 1: Link new node's next to current head
    newNode->next = head;

    // Step 2: If list not empty, set head's prev to new node
    if (head != NULL) {
        head->prev = newNode;
    }

    // Step 3: Update head to new node
    head = newNode;
}


// Print DLL from head to end
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


// // Print DLL from end to head (optional)
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

    insertAtBeg(head, 1); // List: 1
    insertAtBeg(head, 2); // List: 2 -> 1
    insertAtBeg(head, 3); // List: 3 -> 2 -> 1

    cout << "Forward: ";
    printList(head);      // Output: 3 2 1 NULL

    // cout << "Reverse: ";
    // printReverse(head);   // Output: 1 2 3 NULL

    return 0;
}
