/*

pseudocode / alogorithm --> program ko kaise solve karge, un steps ko point wise english mein likhta ja point wise

terminators --> used to start/end the program

e.g. i is not equal to 0 is written as i! = 0

if n % 2 = 0, then the number n is even

if n % 2 = 1, then the number n is odd

*/

// to print all even numbers from 1 to n

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
int n,i=1;
cin>>n;
for ( i = 2; i <= n; i++)
{
  if (i%2==0)
  {
    cout<<i<<endl;
    i++;
  }
}
return 0;
}  */

// better approach to do above Q

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
int n,i=2;
cin>>n;
while (i<=n)
{
  cout<<i;
  i=i+2;
}
return 0;
}  */

// to find sum of all numbers from 1 to n

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
int i=1,num=0,n;
cin>>n;
while (i<=n)
{
  num = num + i;
  i++;
}
cout<<num;


return 0;
} */

// factorial of n

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
int n,fact;
cin>>n;
for (int i = 1; i <= n; i++)
{
  fact = fact * i;
}
cout<<fact;
return 0;
} */

// check if given number is prime or not

/*  #include<iostream>
using namespace std;
int main()
{

    int n,current = 2;
    cin>>n;

    if (n==2)
    {
        cout<<"prime";
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (n % current == 0)
        {
            cout<<"not prime";
            break;
        }


        if (n % current == 1)
        {
            cout<<"prime";
            break;
        }
        current++;
    }


}
*/

// for any number 'n' to be prime, wo 2 se leke 'n-1' tak kisi bhi number se divide nahi hona chahiye //
