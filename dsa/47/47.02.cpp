/* detect loop in a LL (using Floyd's hare and tortoise loop detection algorithm) */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr||head->next==nullptr)
        {
            return false;
        }
        ListNode *fast = head, *slow = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return slow;
            } 
        }
        return false;
    }
};