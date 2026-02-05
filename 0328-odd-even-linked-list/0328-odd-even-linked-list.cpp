/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        // Edge case: Empty list
        if(head == nullptr) return nullptr;
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even; // Store the start of even list
        
        // Loop while there are at least two more nodes to process
        while(even != nullptr && even->next != nullptr){
            // Link current odd to next odd
            odd->next = even->next;
            odd = odd->next;
            
            // Link current even to next even
            even->next = odd->next;
            even = even->next;
        }
        
        // Connect the end of odd list to the head of even list
        odd->next = evenHead;
        
        return head;
    }
};