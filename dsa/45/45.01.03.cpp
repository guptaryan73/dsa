/* https://leetcode.com/problems/reverse-linked-list/ */

/* recursive solution 02 */

class Solution
{
public:
    // Function to reverse the linked list, it will return the head of the reversed list
    ListNode *reverse(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
        ListNode *newHead = reverse(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newHead;
    }

    
    ListNode *reverseList(ListNode *head)
    {
        return reverse(head);
    }
};
