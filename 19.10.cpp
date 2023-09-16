#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
     vector<int> v;
     v.push_back(1);
     v.push_back(2);
     v.push_back(3);
     v.push_back(4);

     cout << "applying binary search using stl  on 3 here \n"
          << binary_search(v.begin(), v.end(), 3);
     cout << "\napplying lower bound using stl  on 3 here \n"
          << lower_bound(v.begin(), v.end(), 3) - v.begin();
     cout << "\napplying upper bound using stl  on 3 here \n"
          << upper_bound(v.begin(), v.end(), 3) - v.begin();

     int a = 5, b = 3;
     cout << "\n"
          << max(a, b) << "\n"
          << min(a, b) << endl;
     swap(a, b);
     cout << a << "\n"
          << b << endl;

     string letter = "abcd"; // reversing the string
     reverse(letter.begin(), letter.end());
     cout << letter << endl;

     rotate(v.begin(), v.begin() + 1, v.end()); // rotating the vector
     for (int i : v)
     {
          cout << i;
     }
     cout << endl;
     sort(v.begin(), v.end()); // sorting the vector
     for (int i : v)
     {
          cout << i;
     }
     return 0;
}