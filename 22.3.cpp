/* reverse a string */

void reverse(char name[], int len) // have to send the length of the string here
{
    int start = 0;
    int end =  - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}