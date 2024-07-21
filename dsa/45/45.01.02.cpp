/* https://leetcode.com/problems/reverse-linked-list/ */

/* recursive solution 01 */

class Solution
{
public:
    void reverse(Listnode *head, Listnode *current, Listnode *previous)
    {
        if (current = nullptr)
        {
            head = previous;
            return;
        }
        reverse(head, current->next, current);
        current->next = previous;
    }
    ListNode *reverseList(ListNode *head)
    {

        Listnode *current = head;
        Listnode *previous = nullptr;
        reverse(head, current, previous);
        return head;
    }
};