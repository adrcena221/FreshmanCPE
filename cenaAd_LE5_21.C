/*
FILENAME        : cenaAd_LE5_21.C
DESCRIPTION     : The program will ask the user to input the number of rows and columns the table should have and display the multiplication table on screen. Use tab for the spacing between numbers horizontally.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 00 October 2021
*/

#include <stdio.h>
    int main () {
        int row, column, inputRows, inputColumns;

        printf("Enter number of rows: ");
            scanf("%d", &inputRows);
        printf("Enter number of columns: ");
            scanf("%d", &inputColumns);

        for (row = 1 ; row <= inputRows; row++)
        {
        for(column = 1; column <= inputColumns; column++)
        {
                if (column<=inputColumns)
                {
                    printf("%3d  ",row*column);
                }
                else 
                {
                    printf("%3d",row*column);
                }
        }
                printf("\n");
        }
        return 0;
    }