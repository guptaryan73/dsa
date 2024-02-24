/*

reverse an array
we use 2 variables - start and end
start ko increase karte jao
end ko decrease karte jao
and start and end ko swap karte jao

stopping condition - when start > end --> this means that start and end have crossed paths and all the numbers have been swapped and the array has been reversed

*/

#include <iostream>
#include <string>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]); // we did n/2 swaps so time complexity is O(n/2) i.e. O(n)  (as we ignore constants while finding time complexity)
        start++;
        end--;
    }
}
int main()
{
    int oddnoofterms[3] = {1, 2, 3};
    int evennoofterms[4] = {1, 2, 3, 4};
    reverseArray(oddnoofterms, 3);
    reverseArray(evennoofterms, 4);
    printArray(oddnoofterms, 3);
    printArray(evennoofterms, 4);
    return 0;
}