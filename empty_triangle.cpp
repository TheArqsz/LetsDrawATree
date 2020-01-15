// Empty Triangle
/*
/       *
/      * *
/     *   *
/    *******
*/
#include <iostream> 
#include <iomanip> 
using namespace std; 
   
int main()
{
    short rows = 15; // Amount of rows in triangle
    short reserved_columns = 2 * rows + 1; // Maximum columns of largest row
    for(short r=1; r<=rows; r++){
        short columns = 2*r - 1; // Amount of asterisks in current row
        short amount_of_spaces = (reserved_columns/2) - r;  // Amount of spaces before asterisks
        cout << setw(amount_of_spaces + 1);     // Draw spaces
        for(short c=0; c<columns; c++){    // Draw asterisks (column by column)
            cout << '*';
            if(r>1 && r<rows){  // Draw all asterisks only in first and last row
                cout << setw(2*r - 2) << "*";
                break;
            }
        }
        cout << endl;   // Break the line to next row
    }

    return 0;
}