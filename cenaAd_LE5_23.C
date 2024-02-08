/*
FILENAME        : cenaAd_LE4_13.C
DESCRIPTION     : Create a program that will display the 1-N value of the Fibonacci sequence. Use a space for the spacing between numbers horizontally.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 00 October 2021
*/

#include <stdio.h>
    int main() {
        
        int i, nTerms;
        int term1 = 1, term2 = 1;
        int nextTerm = term1 + term2;

        printf("Enter limit: ");
        scanf("%d", &nTerms);

    if (nTerms >= 1 && nTerms <= 100) 
    {

        printf("Fibonacci Series: %d, %d, ", term1, term2);

        for(i = 3; i<= nTerms; i++)
        {
            printf("%d, ", nextTerm);
            term1 = term2;
            term2 = nextTerm;
            nextTerm = term1 + term2;
        }
    }
        else 
        {
            printf("INVALID INPUT\n");
        }

        return 0;

    }