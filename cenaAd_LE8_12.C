/*
FILENAME        : cenaAd_LE8_12.C
DESCRIPTION     : Write a function to search an element in array using pointers and return the index location. The function accepts the starting address of the array, number of entries and number to search.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 03 December 2021
*/


#include <stdio.h>
int search (int *array, int nEntries, int searchData);

int main () 
{ 

        int array[100];
        int nEntries, searchData, index;

        
        printf("Enter number of entries: ");
        scanf("%d", &nEntries);
        for (index = 0; index < nEntries; index++)
        {
        printf("Enter number: ");
        scanf("%d", &array[index]);
        }
        printf("\nSearch data: ");
        scanf("%d", &searchData);

        index = search(array, nEntries, searchData);

        if (index == -1)
        {
        printf("NOT FOUND\n", index);
        }
        else
        {
        printf("FOUND in Index %d\n", index);
        }


       return 0;
}

int search (int *array, int nEntries, int searchData)
{
        int index = 0;

        int *arrayEnd = (array + nEntries - 1);
        while (array <= arrayEnd && *array != searchData)
        {
        array++;
        index++;
        }
        if (array <= arrayEnd)
        {
        return index;
        }
        return -1;
}