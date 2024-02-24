/* max and min in an array */

#include <iostream>
#include <string>
using namespace std;
void ArrayMaxMin(int array1[], int size)
{
    int max = INT_MIN; // = 0 mat lena as array mein negative values bhi to ho sakti
    int min = INT_MAX; // = 0 mat lena as array mein negative values bhi to ho sakti
    for (int i = 0; i < size; i++)
    {

        if (array1[i] > max)
        {
            max = array1[i];
        }
        if (array1[i] < min)
        {
            min = array1[i];
        }
    }

    cout << max << " " << min << endl;
}
int main()
{
    int size;
    cin >> size;
    // int array1[size];  this is a bad practice to make a variable array, instead give it a big size if your are not sure ki kitne elements enter karne padenge like
    int array1[100];
    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }

    ArrayMaxMin(array1, size);
    return 0;
}