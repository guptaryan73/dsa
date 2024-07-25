/* https://leetcode.com/problems/reverse-nodes-in-k-group/description/ */

/* using recursion */

class Solution
{
public:
    ListNode *reverseKGroup(ListNode *head, int k)
    {

        // base-case
        if (head == nullptr)
        {
            return NULL;
        }

        // step-1: reverse first k nodes
        ListNode *next = nullptr;
        ListNode *current = head;
        ListNode *previous = nullptr;
        int count = 0;

        while (current != nullptr && count < k)
        {
            next = current->next;
            current->next = previous;
            previous = current;
            current = next;
            count++;
        }

        // step-2: Recursion dekh kega aage ka
        if (next != nullptr)
        {
            head->next = reverseKGroup(next, k);
        }

        // step-3: return head of reversed list
        return previous;
    }
};