// Christmas tree
/*
/       *
/      ***
/     *****
/    *******
/      |||
/      |||
*/
#include <iostream> 
#include <iomanip> 
using namespace std; 
   
int main()
{
    short rows = 15; // Amount of rows in tree
    short reserved_columns = 2 * rows + 1; // Maximum columns of largest row
    short trunk_width = 3; // Amount of columns in trunk
    short trunk_heigth = 2; // Amount of rows in trunk
    for(short r=0; r<=rows; r++){
        short columns = 2*r - 1; // Amount of asterisks in current row
        short amount_of_spaces = (reserved_columns/2) - r;  // Amount of spaces in current row
        cout << setw(amount_of_spaces + 1);
        for(short c=0; c<columns; c++){    // Draw asterisks (column by column)
            cout << '*';
        }
        cout << endl;   // Break the line to next row
    }

    for(short r=0; r<trunk_heigth; r++){ // Draw trunk
        short amount_of_spaces = (reserved_columns/2) - trunk_width + 1; 
        cout << setw(amount_of_spaces + 1);
        for(short c=0; c<trunk_width; c++){    // Draw | (column by column)
            cout << '|';
        }
        cout << endl;   // Break the line to next row
    }

    return 0;
}