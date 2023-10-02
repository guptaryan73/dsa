/*
CONDITIONALS

when checking multiple conditions
first use on if
then use else if statements for every condition
then end this with an else statement
*/
/* #include<iostream>
#include<string>
using namespace std;
int main()
{
int a;
cin >> a;
if(a>0){

cout<<" A is positive"<< endl;
}
else if(a<0) {

cout<<" A is negative"<<endl;

}
else {

cout<<" A is 0"<<endl;

}
return 0;
} */

/* find if character is small or big */

/* #include<iostream>
#include<string>
using namespace std;
int main()
{
char i;
cin>>i;
int a =i;


if (i >= 97 && i <= 122)
{
    cout<<"A is small"<<endl;
}
else if (i >= 65 && i <= 90)

{
    cout<<"a is big"<<endl;
}
return 0;
} */

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, n = 2, sum = 0;
    cin >> i;

    while (n <= i)
    {
        sum = sum + n;
        n = n + 2;
    }

    cout << "sum is " << sum << endl;
    return 0;
}