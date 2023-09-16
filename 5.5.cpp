// sum from 1 to n

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
int sum =0;
int number;
cin>>number;
for (int current = 1; current <= number; current++)
{
    sum += current;
}
cout<<sum<<endl;
return 0;
} */

// fibonacci series

// 0,1,1,2,3,5,8,13,21...

// so any number = sum of the previous 2 numbers before it

// so f(n) = f(n-1) + f(n-2)

#include <iostream>
#include <string>
using namespace std;
int main()
{

    int range;
    cin >> range;
    int first = 0;
    int second = 1;
    cout << first << " " << second << endl;
    // atelast need the first 2 numbers of the fibonacci series to print it i.e. 0 and 1

    for (int i = 0; i <= range; i++)
    {
        int nextfibno = first + second;
        cout << nextfibno;

        // now we have nextfibno = 1 , first = 0 , second = 1;
        /* now to push pointer of first and seconf forward in the array, put value of b in a and value of sum in b */
        first = second;
        second = nextfibno;

        // cant interchange the order ,pehle first ko second ki jagah le jao and then second ko nextfibno ki jagah le jao
    }

    return 0;
}