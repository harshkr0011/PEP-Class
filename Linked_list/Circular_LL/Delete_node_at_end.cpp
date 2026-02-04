#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Delete last node in a circular linked list
Node* deleteLastNode(Node* last) {
    if (last == NULL) return last;

    // Only one node
    if (last->next == last) {
        delete last;
        return NULL;
    }

    Node* temp = last->next; // start from head

    // Traverse to node before last
    while (temp->next != last) {
        temp = temp->next;
    }

    temp->next = last->next; // link to head
    delete last;
    last = temp;             // update last

    return last;
}

// Print circular linked list
void printList(Node* last) {
    if (last == NULL) return;

    Node* head = last->next;
    Node* temp = head;

    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)" << endl;
}

int main() {
    Node* first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node* last = first->next->next;
    last->next = first;   // Make it circular

    last = deleteLastNode(last);

    printList(last);

    return 0;
}
