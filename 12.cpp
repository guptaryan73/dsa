/* binary search */

/* tabhi lagega when either incresing ya decreasing order mein ho */

#include <iostream>
#include <string>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2; // should write as start + (end - start)/2 in case start and end ki value kafi badi hain and start+end int ki range se bahar na ho jaye

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key >= arr[mid]) // right wali side jana padega and yeh karne ke liye start ko current mid ke ek index aage rakh do
        {
            start = mid + 1;
        }

        else // left wali side jana padega and yeh karne ke liye end ko current mid ke ek index piche rakh do
        {
            end = mid - 1;
        }

        // if none of the above conditions

        mid = (start + end) / 2; // mid ko update karna padega as upar ya to start ya to end update hue honge

        // should write as start + (end - start)/2 in case start and end ki value kafi badi hain and start+end int ki range se bahar na ho jaye
    }
    return -1; // when key not found in the whole array
}
int main()
{
    int even_array[6] = {0, 1, 2, 3, 4, 5};
    int odd_array[5] = {0, 1, 2, 3, 4};

    int even_answer = binarySearch(even_array, 6, 1);

    int odd_answer = binarySearch(odd_array, 5, 1);

    cout << even_answer << endl;
    cout << odd_answer << endl;

    return 0;
}
