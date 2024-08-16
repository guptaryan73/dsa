/* https://leetcode.com/problems/copy-list-with-random-pointer/description/ */

class Solution
{
public:
    Node *copyList(Node *head)
    {
        // Step 1: Create copy nodes and insert them after original nodes
        Node *curr = head;
        while (curr)
        {
            Node *copy = new Node(curr->data);
            copy->next = curr->next;
            curr->next = copy;
            curr = copy->next;
        }

        // Step 2: Assign random pointers for the copy nodes
        curr = head;
        while (curr)
        {
            if (curr->random)
            {
                curr->next->random = curr->random->next;
            } 
            curr = curr->next->next;
        }

        // Step 3: Separate the original and copied lists
        Node *newHead = head->next;
        Node *orig = head;
        Node *copy = newHead;

        while (orig)
        {
            orig->next = copy->next;
            orig = orig->next;
            if (orig)
            {
                copy->next = orig->next;
                copy = copy->next;
            }
        }

        return newHead;
    }
};