/* swap alternate */

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
void swapAlternate(int arr[], int size)
{
    for (int index = 0; index < size; index += 2)
    {
        if (index + 1 < size) // check if the current wala index and the next index are present in the array or not
        {
            swap(arr[index], arr[index + 1]);
        }
    }
}

int main()
{
    int oddnoofterms[5] = {7, 8, 9, 10, 11};
    int evennoofterms[6] = {1, 2, 3, 4, 5, 6};

    swapAlternate(oddnoofterms, 5);
    swapAlternate(evennoofterms, 6);

    printArray(oddnoofterms, 5);
    printArray(evennoofterms, 6);

    return 0;
}
