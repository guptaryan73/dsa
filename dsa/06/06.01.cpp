// decimal to binary

// 10  --> 1010

/*

1st approach

1. divide by 2
2. store remainder in another variable

do these 2 steps while n!=0

3. then answer ko reverse karna padega

2nd approach

for any number if we do n & 1 , and the answer is 1 then we can say that the number is odd, otherwise we can say the number is even

so if the current bit is x , then if x = 1 then its & 1 will also be 1 and if the bit is zero then its answer with & 1 will be 0

so if we have to find any bit , us bit ka 1 ke sath & kardo, if answer is 1 then the bit was 1 (as 1 & 1 = 1 i.e. odd) otherwise the bit was 0 (as 0 & 1 is 0)

1. while n !=0
2. rightmost bit = number & 1 // here whether the answer is 1 or 0 will get stored inside the 'bit' variable
3. then right shift mardo to know about the next bit
4. to now store the answer from these bits
e.g. for 5 , ans = 101 so using above methid ,first the 1 bit should have come then the 0 bit should have come then the 1 bit
take int answer = 0
5. so the answer  = (10 power 0 * digit) + answer

for unit place we use 10 power 0
for tens place we use 10 power 1 and so on

so for 5(101) it will be

unit digit = 10 power 0 * 1  + 0  = 1
tens digit = 10 power 1 * 0 + 1 = 1
hundred digit = 10 power 2 * 1 + 1 = 101 (which is the answer)

so if we have 1,2,3 separately and we have to make a single number 123 from it

1. take int answer = 0;

2. answer = (10 power * digit) + answer

2.1 unit number = 10 power 0 * digit(1 is at unit place in 1,2,3) + 0 --> 1
2.2 tens number = 10 power 1 * digit(2 is at tens place in 1,2,3) + 1 (pichla answer)-->  21
2.3 hundred number = 10 power 2 * digit(3 is at hundred place in 1,2,3) + 21 (pichla answer) --> 321

so 1 , 2 , 3 ka 321 bana diya , so hum is formula se reverse nikal sakte

answer = (10 power i * digit ) + answer ;

where i is the current iteration

but if we want to make 123 from 1,2,3 then

answer  = (10 * answer) + digit  // dont use 10 power here

so for 1,2,3 it will be like

answer = 0;

answer  = 10 * 0(currentanswer) + 1(currentdigit) = 1
answer  = 10 * 1(currentanswer) + 2(currentdigit) = 12
answer = 10 * 12(currentanswer) + 3(currentdigit) = 123

// agar ye formular ko binary ke liye use akr rahe hote to digit ki jagah current bit aa jata
then in the 2nd method for converting decimal to binary, we can use above method to get the whole number from the individual bits that we get in each iteration

*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int i = 0;
    int currentanswer = 0;
    while (number != 0)
    {
        int currentbit = number & 1;
        currentanswer = (currentbit * pow(10, i)) + currentanswer;
        number = number >> 1;
        i++;
    }

    cout << currentanswer;
    return 0;
}

/*

decimal to binary for negative numbers

n = -6

1. ignore negative sign i.e. 6

2. now take 2s compliment of the number

6 ---> 0000....0110

1's complement --> 1111....1001

2's complement --> 1111....1010 --> this is stored in memory

now when we print this, we see above that 1st digit is 1 so the number is negative, so iska 2's compliment of 1111....1010 lelo
that comes out to 0000....0110 so ans = -6



*/