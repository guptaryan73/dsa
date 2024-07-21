/* https://leetcode.com/problems/reverse-linked-list/ */

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *current = head;
        ListNode *prev = NULL;
        while (current != NULL)
        {
            ListNode *upnext = current->next;
            current->next = prev;
            prev = current;
            current = upnext;
        }
        return prev;
    }
};