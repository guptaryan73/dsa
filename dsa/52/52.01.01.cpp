/* https://leetcode.com/problems/copy-list-with-random-pointer/description/ */

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if (head == nullptr) return nullptr;
        
        Node* ptr1 = head;
        Node* newhead = new Node(head->val); // Initialize newhead with the value of head
        Node* ptr2 = newhead;
        
        // Create the copied list with next pointers
        while (ptr1->next != nullptr) {
            ptr2->next = new Node(ptr1->next->val);
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        // Reset pointers for the next phase
        ptr1 = head;
        ptr2 = newhead;
        
        // Create a map for old to new node mapping
        unordered_map<Node*, Node*> OldToNewNode;
        
        // Map the old nodes to new nodes
        while (ptr1 != nullptr) {
            OldToNewNode[ptr1] = ptr2;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        // Reset pointers for the final phase
        ptr1 = head;
        ptr2 = newhead;
        
        // Assign random pointers in the new list
        while (ptr1 != nullptr) {
            ptr2->random = OldToNewNode[ptr1->random];
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        return newhead;
    }
};
