/* scopes in array */

#include <iostream>
#include <string>
using namespace std;

void update(int arr[], int size)
{
    cout << "inside the function" << endl;

    // updating the array inside the function

    arr[0] = 120;

    // printing the updated array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "going back to main" << endl;
}
int main()
{
    int arr[3] = {0, 1, 2};
    update(arr, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
        ;
    }
    cout << endl;

    return 0;
}

// here we see ki jab variable ko aise function mein bhejte the to wo pass by value hota tha par jab bhi koi array kisi function main jata hai ya update hota hai to wo paas by reference hota hai and universally change ho jata hai as array ka name uska base address bhi hota hai

// if array is named shonty and it starts from the memory 100 to 112 then shonty also points to the starting memory of the array i.e. 100