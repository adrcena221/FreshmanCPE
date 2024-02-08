/*
FILENAME        : cenaAd_LE4_11.C
DESCRIPTION     : Determine whether the letter entered by the user is vowel or consonant.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 17 September 2021
*/


#include <stdio.h>
    int main () {

        char ltrInput;
        printf("Enter an alphabet: ");
        scanf("%c", &ltrInput);

        // Set input to only alphabets in upper and lower cases using ASCII: 97 = a, 122 = z, 65 = A, 90 = Z
        if ((ltrInput >= 97 && ltrInput <= 122) || (ltrInput >= 65 && ltrInput <= 90)) 
    {
        if (ltrInput =='a'||ltrInput =='e'||ltrInput =='i'||ltrInput =='o'||ltrInput =='u'|| ltrInput =='A'||ltrInput =='E'||ltrInput =='I'||ltrInput =='O'||ltrInput =='U')
            {
                printf("%c VOWEL!\n", ltrInput);
            }
        else {
                printf("%c CONSONANT!\n", ltrInput);
            }
    }
        else {
            printf("%c INVALID INPUT!\n");
            }

        
        return 0;
    }