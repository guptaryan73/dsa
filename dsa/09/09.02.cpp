// array and functions

#include <iostream>
#include <string>
using namespace std;

void printintArray(int array[], int size) // function used to print the integer wale array as input mein int wale array hi ja sakte
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

void printcharArray(char array[], int size) // function used to print thechar wale array as input mein char wale array hi ja sakte
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printintArray(arr, 10);

    int hi[3] = {1, 2, 3};

    cout << sizeof(hi) << endl; //  ans =  4(size of int) * 3(elements in the array)

    cout << sizeof(hi) / sizeof(int) << endl; // actual length of the array

    // but what if array ka size = 10 but humne usmein 2 hi elements dale hain then to is formulae se array ka size 10 hi aayega but actual mein to array ka size 2 hona chahiye. but hum yeh nahi nikal sakte

    // making an array of things other than integers

    char charray[5] = {'a', 'b', 'c', 'd', 'e'};

    cout << charray[3] << endl;

    printcharArray(charray, 5);

    return 0;
}
