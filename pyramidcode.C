/*
FILENAME        : cenaAd_LE5_22.C
DESCRIPTION     : 
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 00 October 2021
*/

#include <stdio.h>

    int main () {
        int i, rows, space, j = 0, count = 0, count1 = 0;

        printf("Enter a value for N: ");
        scanf("%d", &rows);

    if (rows >= 0 && rows <= 100)
    {
        for(i=1; i<= rows; i++) 
        {
                for (space = 1; space <= rows - i; space++) 
                {
                    printf(" ");
                    count++;
                }
                while(j != 2 * i - 1) 
                {
                    if (count <= rows - 1) 
                    {
                        printf("%d", i + j);
                        count++;
                    }
                    else 
                    {
                        count1++;
                        printf("%d", (i + j - 2 * count1));
                    }
                        j++;
                }
                count1 = count = j = 0;
                printf("\n");

        }
    }
    else 
    {
        printf("INVALID INPUT\n");
    }
    return 0;
    }