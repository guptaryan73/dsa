/* creating variable size ka array using heap memory  */

#include <iostream>
#include <string>
using namespace std;
void Summer(int *arr, int n)
{
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
    }
    cout << currentSum;
}

int main()

{
    int n;
    cin >> n;              // taking input
    int *arr = new int[n]; //  creating variable size ka array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Summer(arr, n);
    return 0;
}

/*

to release memory in dynamic memory allocation, we use the "delete keyword"
e.g. int *i = new int
then we do delete i

e.g. int * arr = new int [50];
then we do delete [] arr;
*/