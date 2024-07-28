#include <iostream>
using namespace std;

void removeLoop(ListNode *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return; // No loop possible if the list is empty or has only one node
    }

    ListNode *fast = head, *slow = head;
    
    // Detect loop using Floyd's Tortoise and Hare algorithm
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            // Find the start of the loop
            slow = head;
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }

            // Find the node before the start of the loop to remove it
            ListNode *startOfLoop = slow;
            fast = startOfLoop;
            while (fast->next != startOfLoop)
            {
                fast = fast->next;
            }
            fast->next = nullptr; // Remove the loop
            return;
        }
    }
}
