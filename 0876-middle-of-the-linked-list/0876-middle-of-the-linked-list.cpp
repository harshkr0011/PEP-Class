/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    public:
    ListNode middleNode(ListNode head) {
        // Step 1: Calculate the length of the linked list
        int length = 0;
        ListNode current = head;
        while (current != null) {
            current = current.next;
            length++;
        }

        // Step 2: Find the middle node
        int middle = length / 2;
        current = head;
        for (int i = 0; i < middle; i++) {
            current = current.next;
        }
        // Return the middle node
        return current;
    }
}