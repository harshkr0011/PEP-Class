class Solution {
    public:
    ListNode* middleNode(ListNode* head) {
        // Step 1: Calculate the length of the linked list
        int length = 0;
        ListNode* current = head;
        while (current != NULL) {
            current = current->next;
            length++;
        }

        // Step 2: Find the middle node
        int middle = length / 2;
        current = head;
        for (int i = 0; i < middle; i++) {
            current = current->next;
        }
        // Return the middle node
        return current;
    }
};