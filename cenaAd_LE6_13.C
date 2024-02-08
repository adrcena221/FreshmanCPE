/*
FILENAME        : cenaAd_LE6_13.C
DESCRIPTION     : Ask for 5 strings and display the longest string.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 15 November 2021
*/

#include <stdio.h>
#include <string.h>

int main () {
    char str[5][100];
    int length, i, longest;
    int max = 0;

    for (i=0; i<5; i++)
    {
        printf("Enter 5 strings: ");
        gets(str[i]);
        length = strlen(str[i]);

        if (length > max)
        {
            max = length;
            longest = i;
        }
    }
    printf("The longest string is: ");
    puts(str[longest]);

    return 0;

}