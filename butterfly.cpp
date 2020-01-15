// TieFighter
/*
/   *      *
/   **    **
/   ***  ***
/   ********
/   ********
/   ***  ***
/   **    **
/   *      *
*/
#include <iostream> 
#include <iomanip> 
using namespace std; 
   
int main()
{
    short rows = 9; // Amount of rows in picture
    short reserved_columns = rows + 1; // Maximum columns
    for(short r=1; r<=rows/2; r++){
        short columns = 2*r; // Amount of asterisks in current row
        short amount_of_spaces = reserved_columns - columns - 1;  // Reserved space for spaces 
        for(short c=0; c<columns/2; c++){    // Draw asterisks (column by column)
            cout << '*';
        }
        cout << setw(amount_of_spaces);
        for(short c=0; c<columns/2; c++){    // Draw asterisks (column by column)
            cout << '*';
        }
        cout << endl;   // Break the line to next row
    }
    // Reverse it
    for(short r=rows/2; r>=1; r--){
        short columns = 2*r; // Amount of asterisks in current row
        short amount_of_spaces = reserved_columns - columns - 1;  // Reserved space for spaces 
        for(short c=0; c<columns/2; c++){    // Draw asterisks (column by column)
            cout << '*';
        }
        cout << setw(amount_of_spaces);
        for(short c=0; c<columns/2; c++){    // Draw asterisks (column by column)
            cout << '*';
        }
        cout << endl;   // Break the line to next row
    }

    return 0;
}