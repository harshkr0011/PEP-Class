#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;

        // this -> data= data;
        // this -> next=NULL;
    }
};

void insertAtBeg(Node* &head, int val) { //pass by reference "head" because we change the head
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}


void printList(Node* head) { //pass by value "head" because we print only
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head= NULL;
    insertAtBeg(head,1);
    insertAtBeg(head,2);
    insertAtBeg(head,3);

    printList(head);
}









// #include <bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;

//     Node(int val) {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtBeg(Node* &head, int val) {
//     Node* newNode = new Node(val);
//     newNode->next = head;
//     head = newNode;
// }

// void printList(Node* head) {
//     Node* temp = head;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }



// int main() {
//     Node* head = NULL;

//     insertAtBeg(head, 30);
//     insertAtBeg(head, 20);
//     insertAtBeg(head, 10);

//     printList(head);

//     return 0;
// }
