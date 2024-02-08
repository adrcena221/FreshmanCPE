/*
FILENAME        : cenaAd_LE7_12.C
DESCRIPTION     : Determine whether the letter entered by the user is vowel or consonant.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 16 November 2021
*/


#include <stdio.h>

bool isLetter (char ch);
bool isVowel (char ch);

int main () {

    char ch;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    if (isLetter (ch))
    {
        printf("%c is a letter", ch);
    }
    else 
    {
        printf("%c INVALID INPUT!\n", ch);
    }

    return 0;
}

bool isLetter (char ch)
{
        if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
        {
            return 1;
        }
        else 
        {
            return 0;
        }
    return 0;
}

