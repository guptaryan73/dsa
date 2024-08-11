/* https://leetcode.com/problems/palindrome-linked-list/ */

if (head == nullptr || head->next == nullptr) {
            return true;
        }

        vector<int> values;
        ListNode* current = head;
        while (current != nullptr) {
            values.push_back(current->val);
            current = current->next;
        }

        int front = 0, back = values.size() - 1;
        while (back > front) {
            if (values[front] != values[back]) {
                return false;
            }
            front++;
            back--;
        }

        return true;