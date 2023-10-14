/* square root using binary search */

long long int SqrtIntPart(int number) // finds the integer part of the sqrt
{
	long long int start = 0, end = number, mid = start + ((end - start) / 2), answer = 0;
	while (start <= end)
	{
		if (mid * mid == number)
		// we do long long int everywhere so that there is no int overflow anywhere
		{
			return mid;
		}
		else if (mid * mid > number)
		{
			end = mid - 1;
		}
		else if (mid * mid < number)
		{
			answer = mid;
			start = mid + 1;
		}
		mid = start + ((end - start) / 2);
	}
	return answer;
}

double SqrtDecimalPart(int number, int PrecisionCount, int TempSoln) // finds the decimal part of the sqrt
{
	double factor = 1;
	double answer = TempSoln;
	for (int i = 0; i < PrecisionCount; i++)
	{
		factor /= 10;
		for (double j = answer; j * j < number; j += factor)
		{
			answer = j;
		}
	}
	return answer;
}
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int IntPart = SqrtIntPart(x);
	cout << SqrtDecimalPart(x, 2, IntPart);
	return 0;
}