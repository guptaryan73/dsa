/* whether a linked list is circular or not */

bool isCircularList(Node *head)
{
    if (head == nullptr)
    {
        return true;
    }
    Node *temp = head->next;
    while (temp != nullptr && temp != head)
    {
        temp = temp->next;
    }
    if (temp = head)
    {
        return true;
    }
    return false;
}