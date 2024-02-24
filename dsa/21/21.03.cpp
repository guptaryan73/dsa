/* Add two numbers represented by two arrays */

/* 3 cases - 1. upar wala array bada hai
            2. nice wala array bada hai
            3. dono equal length ke hain and carry aagya

             pointers ko array ke piche se shur arenga as udhr se hi one's place then ten's place shuru hota hai */

#include <bits/stdc++.h>
vector<int>
findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1; /* i and j dono apne apne array ke lasg index ko point karre hain taki hum wahin se one's place ka sum then carry, then ten's place ka sum and so on */
    vector<int> ans;
    int carry = 0;
    while (i >= 0 && j >= 0) // starting tak hi rehna,array ke bahar mat nikal jana
    {
        int value1 = a[i], value2 = b[j];
        int sum = value1 + value2 + carry;

        carry = sum / 10; // e.g. 8 + 8 = 16 se base number = 6 i.e. 16%10 and carry = 1 i.e. 16/10 . so carry ke liye /10 and sum ke liye % 10
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    // first case (cases written on top of doc)

    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10; // e.g. 8 + 8 = 16 se base number = 6 i.e. 16%10 and carry = 1 i.e. 16/10 . so carry ke liye /10 and sum ke liye % 10
        int value = sum % 10;
        ans.push_back(sum);
        i--;
    }
    // second case (cases written on top of doc)

    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10; // e.g. 8 + 8 = 16 se base number = 6 i.e. 16%10 and carry = 1 i.e. 16/10 . so carry ke liye /10 and sum ke liye % 10
        int value = sum % 10;
        ans.push_back(sum);
        j--;
    }

    // third case (cases written on top of doc)

    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10; // e.g. 8 + 8 = 16 se base number = 6 i.e. 16%10 and carry = 1 i.e. 16/10 . so carry ke liye /10 and sum ke liye % 10
        int value = sum % 10;
        ans.push_back(sum);
    }
    reverse(ans.begin(), ans.end());
    return ans; // is method mein answer ulta aayega as humen ans wale vector mein pehle unit wala sum then tens wala sum aisae dala hai so humen vector ko reverse karna padega
}