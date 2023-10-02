/*
	ARRAYS

	1. ek array ka har ek element same type ka hona chahiye e.g. array ki sab entries integer hain OR har ek entry character hai
	so ek single array mein ek hi type ka datatype aa sakta hai

	2. array ke sab elements ek hi line se continuously line se memory ke andar stored hoti hai.

	e.g. array containing 5 integers
	as we know, int 4 bytes leta hai
	so if in the above array, 1st element is at address 100, then next element will be at 104, next at 108 and so on as ek array se sabhi elements ek hi sath stored hote hain line se bilkul sath sath.

	in array of size n , index goes from 0 to n-1

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	/* declaring array */
	int first[10];
	/* here this is an array where shonty is the name of the array and the size of the array is 10 */

	int second[3] = {1, 2, 3};

	cout << second[0] << endl;

	int third[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

	// printing the array

	for (int i = 0; i < 10; i++)
	{
		cout << third[i];
	}

	return 0;
}