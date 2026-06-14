class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        // Detect cycle
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                // Find starting node of cycle
                ListNode *ptr = head;

                while (ptr != slow) {
                    ptr = ptr->next;
                    slow = slow->next;
                }

                return ptr;
            }
        }

        return NULL;
    }
};
