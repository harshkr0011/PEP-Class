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

// Function to count even-valued nodes
int countEvenNodes(Node* head) {
    int count = 0;

    while (head != NULL) {
        if (head->data % 2 == 0) {
            count++;
        }
        head = head->next;
    }

    return count;
}

int main() {
    // Create singly linked list
    Node* head = new Node(33);
    head->next = new Node(42);
    head->next->next = new Node(18);
    head->next->next->next = new Node(11);
    head->next->next->next->next = new Node(17);

    // Count even-valued nodes
    int evenCount = countEvenNodes(head);

    cout << "Number of nodes with even values: " << evenCount << endl;

    return 0;
}


