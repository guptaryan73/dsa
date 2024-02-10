/* spiral print */

/*
   1. print starting row
   2. print ending column
   3.print ending row
   4. print starting column
   and har ek step pe +1 karte jana  hai taki e.g. next wali row ab new starting row ban jaye
*/

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
   // complexity of this solution is O(mxn) as humne har element ko ek hi bar traverse kiya hai

   vector<int> answer;
   int rows = matrix.size();         // number of row lene ke liye
   int cols = matrix[0].size();      // number of column lene ke liye
   int counter = 0;                  // current elements jitne print ho chuke hain
   int total_elements = rows * cols; // total number of elements ke liye

   // index initialise karre hain

   int starting_row = 0;
   int starting_column = 0;
   int ending_row = rows - 1;
   int ending_column = cols - 1;

   while (counter < total_elements) // ye condition har individual loop ke andar bhi lagake check karte rehna hai for each iteration tak aisa case avoid ho jayen jismein hum counter ko check kiye bina bas loop chalaye ja rahe hain to yeh loops total number of elements se bhi zyada bar run ho jayenge
   {
      // to print starting row, starting column se ending column tak sab elements print karne hain
      for (int index = starting_column; index <= ending_column && counter < total_elements; index++)
      {
         answer.push_back(matrix[starting_row][index]); // yahan tak starting row print ho chuki hai to ab next next line mein starting row ki increment kar denge
         counter++;                                     // elements dalte jayenge answer wale array mein and counter ko bhadate jayenge
      }
      starting_row++;

      // print ending column, to do this, starting row se ending row tak chale jao and sab print karte jao
      for (int index = starting_row; index <= ending_row && counter < total_elements; index++)
      {
         answer.push_back(matrix[index][ending_column]);
         counter++; // elements dalte jayenge answer wale array mein and counter ko bhadate jayenge
      }
      ending_column--; // current column ko piche wale column pe point kara denge

      // print ending row, to do this, ending column se starting column tak chale jao and sab print karte jao
      for (int index = ending_column; index >= starting_column && counter < total_elements; index--)
      {
         answer.push_back(matrix[ending_row][index]); // yahan tak starting row print ho chuki hai to ab next next line mein starting row ki increment kar denge
         counter++;                                   // elements dalte jayenge answer wale array mein and counter ko bhadate jayenge
      }
      ending_row--; // current row ko upar wali row pe point kara denge

      // print starting column, to do this, ending row se starting row tak chale jao and sab print karte jao
      for (int index = ending_row; index >= starting_row && counter < total_elements; index--)
      {
         answer.push_back(matrix[index][starting_column]);
         counter++; // elements dalte jayenge answer wale array mein and counter ko bhadate jayenge
      }
      starting_column++; // current column ko aage wale column pe point kara denge
   }
   return answer;
}
