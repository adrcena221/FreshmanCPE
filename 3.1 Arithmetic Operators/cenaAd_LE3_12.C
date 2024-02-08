/*
FILENAME        : cenaAd_LE3_12.C
DESCRIPTION     : Program in C that extracts and adds the two least significant digits of an integer.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 07 September 2021
*/


#include <stdio.h>

    int main () { 

        int num;
        int firstDigit;
        int secondDigit;
        int sum;


        printf("Enter an integer: ");
        scanf("%d", &num);

        /* Gets the first digit */
        firstDigit = (num % 10);

        /*Gets the second digit */
        secondDigit = (num / 10)% 10;

        /* Computes the sum of the first and second digit */
        sum = firstDigit + secondDigit;
        printf("\nSum of the last two digits is: %d", sum);

        return 0;
    }

