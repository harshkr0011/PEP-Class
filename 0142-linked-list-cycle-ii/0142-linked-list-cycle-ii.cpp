class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (head == NULL)
        return NULL;

        ListNode* slow = head ;
        ListNode* fast = head ;

        while(fast != NULL && fast -> next != NULL ){
            slow = slow -> next ;
            fast = fast -> next -> next ;

            if (slow == fast ){//if both meet slow = fast 
                slow = head ;//slow position is on head 
                while (slow != fast){//if slow is not = to fast 
                    slow = slow -> next;//move 1 step forward 
                    fast = fast -> next;//move 1 step forward

                }
                return slow ;//this node is the start of the cycle 
              }
        }
        return NULL;//other wise return null 
    }
};