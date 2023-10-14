/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1

run hora current 2 x curerentrow - 1 times
also shuru and end mein space bhi hai

spaces at start are row - currentrow

now we first have to print left side half if the figure

      1
    1 2
  1 2 3
1 2 3 4

here loop chalra currentrow number of times and column ka number print karre increment karte hue accordingly

wala triangle

then we print right side half of the figure

_(khali space)
1
2 1
3 2 1

so we can observe that is triagnle ki start currentrow - 1 wale number se hori hai
eg in 3 rd row it is 3-1 ie 2 then 1
*/

#include <iostream>
using namespace std;
int main()
{
  int row;
  cin >> row;
  int currentrow = 1;
  while (currentrow <= row)
  {
    int space = row - currentrow;
    // priting space
    while (space > 0) // printing the pehle wali space inside the loop as it is dependent upon the current row
    {
      cout << " ";
      space--;
    }
    // printing pehle wala triangle
    int column = 1;
    while (column <= currentrow)
    {
      cout << column;
      column++;
    }
    // printing second wala triangle
    int startnumber = currentrow - 1;
    while (startnumber)
    {
      cout << startnumber;
      startnumber--;
    }
    cout << endl;
    currentrow++;
  }
  return 0;
}