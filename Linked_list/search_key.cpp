#include <bits/stdc++.h>
using namespace std;

// Node definition
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Recursive function to search a key
bool searchKey(Node* head, int key) {

    // Base case: end of list
    if (head == NULL)
        return false;

    // If key is found
    if (head->data == key)
        return true;

    // Recursive call for next node
    return searchKey(head->next, key);
}

// Function to print the linked list
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {

    // Create singly linked list
    Node* head = new Node(33);
    head->next = new Node(42);
    head->next->next = new Node(18);
    head->next->next->next = new Node(11);
    head->next->next->next->next = new Node(17);

    // Print the list
    printList(head);

    int key = 18;

    // Search for the key
    if (searchKey(head, key))
        cout << "Key " << key << " found in the linked list." << endl;
    else
        cout << "Key " << key << " not found in the linked list." << endl;

    return 0;
}
