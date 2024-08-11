/* https://leetcode.com/problems/add-two-numbers/ */

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode();
        ListNode* current = dummy;
        int carry = 0;

        while (l1 != nullptr && l2!= nullptr) {
            current->next = new ListNode((l1->val + l2->val + carry) % 10);
            carry = (l1->val + l2->val + carry) / 10;
            l1 = l1->next;
            l2 = l2->next;
            current=current->next;
        }

        while(l1!=nullptr)
        {
            current->next = new ListNode((l1->val+ carry) % 10);
            carry = (l1->val + carry) / 10;
            l1 = l1->next;
            current=current->next;
        }
        while(l2!=nullptr)
        {
            current->next = new ListNode((l2->val+ carry) % 10);
            carry = (l2->val + carry) / 10;
            l2 = l2->next;
            current=current->next;
        }
        if (carry != 0) {
            current->next = new ListNode(carry);
        }
        return dummy->next;
    }
};