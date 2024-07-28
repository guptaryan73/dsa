/* detect loop in a LL (using map) */
bool isLoop(Node *head)
{
    if (head == nullptr)
    {
        return false;
    }
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != nullptr)
    {
        if (visited[temp] = true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}