/* first and last occurance in an array */

#include <iostream>
#include <string>
using namespace std;

int firstOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int answer = -1;
    while (start <= end)
    {
        if (arr[mid] == key) // left side mein jayenge as kya pata ki left side aur koi lesser index wali first occurance padi ho
        {
            answer = mid; // current occurance ko pehle store karlo and check karo left side pe ki agar aur kam index pe koi aur first occurance mil jaye
            end = mid - 1;
        }
        else if (arr[mid] > key) // left wale part mein hi first occurance milegi
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            // right wale part mein hi first occurance milegi
            start = mid + 1;
        }

        mid = start + (end - start) / 2; // updating mid according to the new values
    }

    return answer;
}

int lastOccurrence(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    int answer1 = -1;
    while (start <= end)
    {
        if (arr[mid] == key) // right side mein jayenge as kya pata ki right side aur koi more index wali last occurance padi ho
        {
            answer1 = mid; // current occurance ko pehle store karlo and check karo right side pe ki agar aur zyada index pe koi aur last occurance mil jaye
            start = mid + 1;
        }
        else if (arr[mid] > key) // left wale part mein hi last occurance milegi
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            // right wale part mein hi last occurance milegi
            start = mid + 1;
        }

        mid = start + ((end - start) / 2); // updating mid according to the new values
    }

    return answer1;
}

int main()
{
    int even[4] = {1, 1, 1, 1};
    cout << firstOccurrence(even, 4, 1) << endl;
    cout << lastOccurrence(even, 4, 1) << endl;
    return 0;
}
