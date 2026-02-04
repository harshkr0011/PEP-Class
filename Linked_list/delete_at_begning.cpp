#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// Delete the head node and return the new head
Node* deleteHead(Node* head) {
  
    // Check if the list is empty
    if (head == nullptr)
        return nullptr;

    // Store the current head in a
    // temporary variable
    Node* temp = head;

    // Move the head pointer to the next node
    head = head->next;

    // Free the memory of the old head node
    delete temp;

    return head;
}

// Function to print the linked list
void printList(Node* curr) {
    while (curr != nullptr) {
        cout << curr->data;
        if (curr->next != nullptr) {
            cout << " -> ";
        }
        curr = curr->next; 
    }
}

int main() {
  
    // Create a hard-coded linked list:
    // 8 -> 2 -> 3 -> 1 -> 7
    Node* head = new Node(8);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(7);

    head = deleteHead(head); 
    printList(head);

    return 0;
}