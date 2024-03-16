/* default arguements */

#include <iostream>
#include <string>
using namespace std;
void printer(int arr[], int n, int start = 0) // here int start has been made a default arguement i.e. agar code mein explicitally uski value pass hogi then wo value use kar li jayegi otherwise default value = 0 kar li jayegi
{
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    cout<< endl;
}
int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    int size = 5;
    printer(arr, size);
    printer(arr, size, 2);
    return 0;
}