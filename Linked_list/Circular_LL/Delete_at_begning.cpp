#include <bits/stdc++.h>
using namespace std;

// Node class for circular linked list
class Node {
public:
    int data;      // Stores node value
    Node* next;    // Pointer to next node

    // Constructor to initialize node
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Function to delete the first node (head) of a circular linked list
Node* deleteFirstNode(Node* last) {

    // If list is empty, nothing to delete
    if (last == NULL)
        return last;

    // In circular list, last->next always points to the first node
    Node* head = last->next;

    // Case 1: Only one node in the list
    if (head == last) {
        delete head;       // Delete the only node
        return NULL;       // List becomes empty
    }

    // Case 2: More than one node in the list
    // Make last node point to the second node
    last->next = head->next;

    // Delete the old first node
    delete head;

    // Return updated last pointer
    return last;
}

// Function to print the circular linked list
void printList(Node* last) {

    // If list is empty, nothing to print
    if (last == NULL)
        return;

    // Start traversal from the first node
    Node* head = last->next;
    Node* temp = head;

    // Traverse the circular list until we reach head again
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    // Indicate circular nature of list
    cout << "(back to head)" << endl;
}

int main() {

    // Create nodes
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    // Set last node
    Node* last = first->next->next;

    // Make the list circular by connecting last to first
    last->next = first;

    // Delete the first node of the circular linked list
    last = deleteFirstNode(last);

    // Print the updated list
    printList(last);

    return 0;
}
