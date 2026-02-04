#include <bits/stdc++.h>
using namespace std;

// Step 1: Define a Node class for the linked list
class Node {
public:
    int data;       // stores the value of the node
    Node* next;     // pointer to the next node

    // Constructor to create a new node
    Node(int val) {
        data = val; // assign the value
        next = NULL; // initially next is NULL
    }
};

// Step 2: Function to insert a new node at a given position
void insertAtPosition(Node* &head, int pos, int val) {

    // Step 2a: If position is invalid (<1), do nothing
    if (pos < 1) return;

    // Step 2b: If inserting at the beginning (position 1)
    if (pos == 1) {
        Node* node = new Node(val); // create new node
        node->next = head;          // point new node to current head
        head = node;                // update head to new node
        return;                     // insertion done
    }

    Node* temp = head;  // Step 2c: Start from the head to traverse the list

    // Step 2d: Traverse to the (pos-1)th node using FOR loop
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next; // move to the next node
    }

    // Step 2e: If position is out of range (temp became NULL), do nothing
    if (temp == NULL) return;

    Node* node = new Node(val); // Step 2f: Create the new node

    // Step 2g: Linking the new node
    node->next = temp->next;    // new node points to next node
    temp->next = node;          // previous node points to new node
}

// Step 3: Function to print the linked list
void printList(Node* head) {
    Node* temp = head;          // start from the head

    // Step 3a: Traverse the list till the end
    while (temp != NULL) {
        cout << temp->data;     // print the node value
        if (temp->next != NULL) // print arrow if next exists
            cout << " -> ";
        temp = temp->next;      // move to next node
    }
    cout << endl;               // newline after printing the list
}

// Step 4: Driver code
int main() {

    // Step 4a: Create initial list: 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Step 4b: Insert new node with value 99 at position 4
    // This will insert between 3 and 4
    insertAtPosition(head, 4, 300);

    // Step 4c: Print the updated linked list
    printList(head); // Output: 1 -> 2 -> 3 -> 99 -> 4

    return 0; // Step 4d: End of program
}
