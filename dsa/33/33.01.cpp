/* if an annray is sorted or not using recursion */

#include <iostream>
#include <string>
using namespace std;
bool isSorted(int arr[], int size)
{
    // base case

    // if array ka size is 0 or 1, then it is already sorted

    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        return isSorted(arr+1, size-1); // array ke elements ko ek se aage bhade denge and pehla element check hogya so array ka size ek kam ho jayega
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    isSorted(arr, 5);
    if(&isSorted)
    {
        cout<<"array is sorted"<<endl;
    }
    return 0;
}