/*
FILENAME        : cenaAd_LE6_12.C
DESCRIPTION     : Ask a string and determine how many vowels and consonants.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 15 November 2021
*/

#include <stdio.h>
#include <string.h>

int main () {

    char str [100];
    int i, vow=0, cons=0;

    printf("Enter a string: ");
    gets(str);

    for (i=0; str[i]; i++)
    {
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)) 
        {
        if (str[i] =='a'||str[i] =='e'||str[i] =='i'||str[i] =='o'||str[i] =='u'|| str[i] =='A'||str[i] =='E'||str[i] =='I'||str[i] =='O'||str[i] =='U')
        vow++;

        else
        cons++;
        }

    }


    printf("Number of Vowels: %d\n", vow);
    printf("Number of Consonants: %d\n", cons);

    return 0;
}