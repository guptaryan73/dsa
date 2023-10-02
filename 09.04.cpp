/* there are predefined keywords to find the max and min of an array */

#include <iostream>
#include <string>
using namespace std;
void ArrayMaxMin(int array1[], int size)
{
    int maximum = INT_MIN; // = 0 mat lena as array mein negative values bhi to ho sakti
    int minimum = INT_MAX; // = 0 mat lena as array mein negative values bhi to ho sakti

    for (int i = 0; i < size; i++)
    {
        maximum = max(maximum, array1[i]);
        minimum = min(minimum, array1[i]);
    }

    cout << maximum << " " << minimum << endl;
}
int main()
{
    int size;
    cin >> size;

    int array1[100];

    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }

    ArrayMaxMin(array1, size);
    return 0;
}