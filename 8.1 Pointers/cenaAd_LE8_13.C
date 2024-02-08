/*
FILENAME        : cenaAd_LE8_13.C
DESCRIPTION     : Program in C that extracts and adds the two least significant digits of an integer.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 03 December 2021
*/


#include <stdio.h>
int maximum (int *array, int nEntries);

int main () 
{ 
        
        int array[100];
        int nEntries, index;

        
        printf("Enter number of entries: ");
        scanf("%d", &nEntries);
        for (index = 0; index < nEntries; index++)
        {
        printf("Enter number: ");
        scanf("%d", &array[index]);
        }
        index = maximum(array, nEntries);

        printf("\nMaximum Number: %d\n", index);

       return 0;
}
int maximum (int *array, int nEntries)
{
        int *maximum, index;
        maximum = array;
        *maximum = *array;
        for (index = 1; index < nEntries; index++)
        {
                if (*(array+index) > *maximum)
                {
                *maximum = *(array+index);
                }
        }
        return *maximum;
}

