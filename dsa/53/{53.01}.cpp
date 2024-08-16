/* https://leetcode.com/problems/sort-list/description/ */

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
class Solution
{
public:
    ListNode *sortList(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr || fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    ListNode *sortList(ListNode *head)
    {
        // base case
        if (head = nullptr || head->next = nullptr)
        {
            return head;
        }
        // mid nikalo
        
        Listnode *mid = findMid(head);
        // divide LL inot 2 halves
        Listnode *leftHalf = head;
        Listnode *rightHalf = mid - next;
        mid->next = nullptr;
        // recursive calls
        Listnode *leftHalf = sortList(leftHalf);
        Listnode *rightHalf = sortList(rightHalf);

        // merge the two created halves
        
    }
};