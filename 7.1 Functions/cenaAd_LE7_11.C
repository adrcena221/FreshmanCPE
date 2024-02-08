/*
FILENAME        : cenaAd_LE7_11.C
DESCRIPTION     : Program in C that extracts and adds the two least significant digits of an integer.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 16 November 2021
*/


#include <stdio.h>

int extractFirstLSD (int num);
int extractSecondLSD (int num);
int sumDigits (int x, int y);

int main () 
{ 

        int num;
        int sum;
        int x, y;

        printf("Enter a integer: ");
        scanf("%d", &num);
        x = extractFirstLSD (num);
        y = extractSecondLSD (num);
        sum = sumDigits(x, y);
        printf("\nSum: %d + %d = %d \n", y, x ,sum);
    
        return 0;
}
int sumDigits (int x, int y)
{
        int result;
        result = x + y;
        return result;
}
int extractFirstLSD (int num)
{
        /* Gets the first digit */
        int result;
        result = (num % 10);
        return result;
}
int extractSecondLSD (int num)
{
        /*Gets the second digit */
        int result;
        result = (num / 10)% 10;
        return result;
}


