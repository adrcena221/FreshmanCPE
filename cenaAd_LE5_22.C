/*
FILENAME        : cenaAd_LE5_22.C
DESCRIPTION     : Create a program that would display the pyramid
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 00 October 2021
*/

#include <stdio.h>
#include <stdlib.h>

    int main () {
        int i, input, space, first, second;

        printf("Enter a value for N: ");
        scanf("%d", &input);

    if (input >= 1 && input <= 100) 
    {
        for(i=1; i<= input; i++) 
        {
            for(space = 1; space <= input - i; space++)
            {
                printf(" ");
            }
            for(first = 1; first <= i; first++)
            {
                printf("%d", first);
            }
            for(second = i-1; second >= 1; second--)
            {
                printf("%d", second);
            }
            
             printf("\n");

        }
    }
        else 
        {
            printf("INVALID INPUT\n");
        }


        return 0;
    }