
class Solution {
    public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        int i = 0;
        ListNode* p = head;
        while(p->next != NULL){
            i++;
            p = p->next;
        }
        i++;
        if(k%i == 0){
            return head;
        }
        int num = i - k%i;
        i = 0;
        ListNode* q = head;
        while(i != num-1){
            q = q->next;
            i++;
        }
        ListNode* r = q->next;
        p->next = head;
        q->next = NULL;
        return r;
    }
};