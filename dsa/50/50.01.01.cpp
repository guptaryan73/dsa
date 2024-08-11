/* https://leetcode.com/problems/palindrome-linked-list/ */

class Solution
{
public:
    bool check(ListNode *left, ListNode *right)
    {
        while (right != nullptr)
        {
            if (right->val != left->val)
            {
                return false;
            }
            left = left->next;
            right = right->next;
        }
        return true;
    }
    ListNode *reverse(ListNode *slow)
    {
        ListNode *prev = nullptr;
        while (slow != nullptr)
        {
            ListNode *upnext = slow->next;
            slow->next = prev;
            prev = slow;
            slow = upnext;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return true;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *reversedHalf = reverse(slow);
        return check(head, reversedHalf);
    }
};