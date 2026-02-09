/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
         if(head == NULL) return NULL;

        //1. insert new nodes in the original LL
        Node* curr = head;
        while(curr)
        {
            Node* currnext = curr->next; // B
            curr->next = new Node(curr->val); // A->B
            curr->next->next = currnext; // A->x->B
            curr = currnext; //B
        }

        //2. make deep copy of random pointers
        curr = head;
        while(curr && curr->next)
        {
            if(curr->random == NULL) curr->next->random = NULL;
            // most imp line of the code, we point the next of current's random to the random's next 
            else curr->next->random = curr->random->next; 
            curr = curr->next->next;
        }

        //3. seperate both linked lists
        curr = head;
        Node* newHead = head->next;
        Node* newCurr = newHead;

        while(curr && newCurr)
        {   
            // precautionary check for curr->next being null 
            curr->next = curr->next == NULL ? NULL : curr->next->next; 

            newCurr->next = newCurr->next == NULL ? NULL : newCurr->next->next;

            curr = curr->next;
            newCurr = newCurr->next;
        }
        return newHead;
    }
};