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

    if (isVowel (ch))
    {
        printf("%c VOWEL!\n", ch);
    }
    else
    { 
        printf("%c CONSONANT!\n", ch);
    }

    }
    else 
    {
        printf("INVALID INPUT!\n");
    }
    return 0;
}

bool isLetter (char ch)
{
    bool letterBool;
        if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
        {
            letterBool = 1;
        }
        else 
        {
            letterBool = 0;
        }
    return letterBool;
}

bool isVowel (char ch)
{
    bool vowelBool;
        if (ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u'|| ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U')
        {
            vowelBool = 1;
        }
        else 
        {
            vowelBool = 0;
        }
    return vowelBool;
}
