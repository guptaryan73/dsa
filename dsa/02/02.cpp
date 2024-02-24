/* to make new line in cpp, either use endl or use '\n' */

/* example */

#include <iostream>
#include <string>
using namespace std;
int main()
{

    int i;
    int size = sizeof(i);
    char bintu = 'a';
    // to denote characters, we use single inverted commas;
    cout << "hello \n how are you\n";

    /*
    int - 4 byte / 32 bit
    char - 1 byte / 8 bit
    bool -  1 bit
    float - 4 byte / 32 bit (used to store decimal numbers)
    double - 8 byte (used to store decimal numbers)

    variable name kabhi bhi number se start nahi kar sakte e.g. int 2ab is a wrong variable;
    */

    // how to use bool

    bool bl = true; // or bool bl = 1
    cout << bl << endl;

    bool bo = false; // or bool bo = 0
    cout << bo << endl;

    // sizeof is used to see ki konsa variable kitni sace le raha hai

    cout << sizeof(bo) << endl; // or int size = sizeof(bo) and then cout the variable 'size' ;

    cout << size << endl; /* here size is a variable which stores the size of the int variable 'i' which will be 4 as any int variable takes 4 bytes of space */

    // char let = 'ab' is wrong as ek char mein ek hi character store kar sakte hain

    // typecasting - convert from one type to another

    int a = 'a';

    cout << a << endl;

    // output = 97 as in ascii table, the character 'a' is mapped to the integer '97'

    // here the char wala 'a' has been typecasted into int datatype

    // can we do the opposite typecasting ?

    char cha = 98;
    cout << cha << endl;

    // output = b as in ascii table, the character 'b' is mapped to the integer '98'

    // here the int wala '98' has been typecasted into char datatype

    // int --> 4 byte / 32 bit --> so max value that can be stored in int is 2 power 32 - 1
    //                                min value that can be stored in int is 0
    // similarly
    // char --> 1 byte / 8 bit --> so max value that can be stored in char is 2 power 8 - 1
    //                                min value that can be stored in char is 0

    // so if we try to typecast a big integer value like 2 power 16 into char, then what will happen ?

    char chac = 123456;
    cout << chac << endl;

    // here we get error as char mein itni memory hi nahi hai ki wo itne bade integer ko pura char mein typecast kar paye
    // so 123456 ka int ke 4 byte storage wali storage mein last mein 64 aata hai
    // so yeh last ka 64 hi char ke 1 byte mein typecast hojata hai and '64' is mapped to @ wala sign
    // so in output we get @ wala sign

    // how negative numbers are stored

    // the first bit in the storage donates whether the number is positive or negative

    // positive --> 1st bit = 0
    // negative --> 1st bit = 1

    // e.g. storing -5

    /*
    step 1 - ignore negative sign -> 5
    step 2 - convert to binary ->  0000 0000 0000 0101 (as integer is of 4 byte)
    step 3 - take 1's compliment --> convert every 0 to 1 and every 1 to 0 --> 1111 1111 1111 1010
    step 4 - take 2's compliment --> add +1 to above 1's compliment --> 1111 1111 1111 1011 --> here 1st bit is 1 so the number is negative and we store the negative number as this 2's compliment
    */

    /*

    how to print a negative number ?

    e.g. int a = -5;

    step 1 --> -5 has been stored in 4 bytes as 1111 1111 1111 1011
    step 2 --> take 1's compliment --> 0000 0000 0000 0100
    step 3 --> take 2's compliment --> 0000 0000 0000 0101 (here initial bit is 0, so this number is positive wala 5)
    step 4 --> now when we print the number , from step 1 we will get to know that the number is negative as the first bit is 1 and from step 3 we will get to know that the numerical value of the number
    so here -5 will get printed

    by default , we can store any +ve or -ve number in int , but if we want it to store only positive numbers i.e. from 0 to 2 power 32 - 1, then we write like

    unsigned int a

    here 'a' will only be able to store +ve numbers;

    */
    unsigned int bunty = 12;
    cout << bunty << endl;

    /*

    OPERATORS

    in cpp, e.g. int a = 2/5 => 0 (not 0.4) as int/int will also be an integer (0 here)

     */

    int shonty = 2 / 5;
    cout << shonty << endl;

    int wow = 2.0 / 5; // this gives ans = 0 not 0.4 as it is int datatype
    cout << wow << endl;

    /*
    float/int = float

    double/int = double
    */

    cout << 2.0 / 5 << endl; // this gives ans = 0.4 as the value is not being stored in an int a and is only being displayed;

    float damn = 2.0 / 5; // this gives ans = 0.4 as it is float datatype ||ly for double
    cout << damn << endl;

    /*

    RELATIONAL OPERATORS

    (=,>=,!=,<=,> etc)

     */

    int a1 = 2;
    int b = 3;

    bool first = (a1 == b);
    cout << first; // output = 0 i.e. false

    /* a = 3 means a mein 3 ki value assign kardi
    so a = b means a mein b ki value store kardi  */

    /*

    Logical operators

    &&(and and)

    eg if you are 80 kg *and* are male *and* are above 5ft10inch, then you are fit.

    i.e && used when multiple conditional and statements are to be excecuted

    sari conditions should be fulfilled

    || (or or)

    eg if you are 80 kg *or* are male *or* are above 5ft10inch, then you are fit.

    atleast koi bhi ek condition should be fulfilled

    ! (not)

    a = 23
    then !a will be equal to 0
    true ka false
    false ka true

     */

    int a2 = 21;
    cout << !a2;

    // output = 0

    int a3 = 0;
    cout << !a3;

    // output will be ulta of 0 i.e 1

    return 0;
}