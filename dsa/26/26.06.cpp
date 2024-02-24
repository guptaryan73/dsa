#include <iostream>
#include <string>
using namespace std;

int getSum(int arr[], int n)
{
    cout << sizeof(arr) << endl; // size comes 8 instead of 20 ( 5 elements in the array * 4 is the size of each int ) which means that whenever we pass an array into any function, actually wo array nahin pass hota balke ek pointer passs hota hai hence the "8" size

    /* e.g. getSum(arr+3) would only send the array 3rd wale index and uske baad and then wo function usi portion of the array pe apply hoga */
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5,8};
    cout << getSum(arr+3, 3) << endl;
    return 0;
}