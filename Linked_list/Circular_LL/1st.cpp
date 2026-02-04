// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
    
//     int data;
//     Node* next;

//     Node(int val){
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtEnd(Node* &head, int val) {
//     Node* newNode = new Node(val);

//     if(head == NULL){
//         head = newNode;
//         head -> next = head;
//         return;
//     }

//     Node* temp = head;
//     while (temp->next != head) {
//         temp = temp->next;
//     }

//     temp->next = newNode;
//     newNode->next= head;
// }

// void insertAtBeg(Node* &head, int val) {
//     Node* newNode = new Node(val);

//     newNode -> next = head -> next;
//     head -> next = newNode;
// }


// // Print linked list
// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }

// int main(){

// }







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

// Insert node at end
void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);

    // If list is empty
    if (head == NULL) {
        head = newNode;
        newNode->next = head;   // point to itself (circular)
        return;
    }

    Node* temp = head;

    // Traverse till last node
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
}

// Insert node at beginning
void insertAtBeg(Node* &head, int val) {
    Node* newNode = new Node(val);

    // If list is empty
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
        return;
    }

    Node* temp = head;

    // Go to last node
    while (temp->next != head) {
        temp = temp->next;
    }

    newNode->next = head;  // new node points to old head
    temp->next = newNode;  // last node points to new node
    head = newNode;        // update head
}

// Print circular linked list
void printList(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "After inserting at end: ";
    printList(head);   // 10 20 30

    insertAtBeg(head, 5);

    cout << "After inserting at beginning: ";
    printList(head);   // 5 10 20 30

    return 0;
}
