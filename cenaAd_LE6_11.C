/*
FILENAME        : cenaAd_LE6_11.C
DESCRIPTION     : Design the logic for a program that allows a user to enter 10 numbers, then displays all of the numbers, the largest number, and the smallest.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 15 November 2021
*/

#include <stdio.h>

int main () {

    int num[10];
    int i, large, small;

for (i=0; i<10; i++)
{
    printf("Enter 10 numbers: ");
    scanf("%d", &num[i]);

    large=small=num[0];
}
for (i=1; i<10; i++)
{
    if (num[i]>large)
    {
        large = num[i];
    }
    if (num[i]<small)
    {
        small = num[i];
    }
}


for (i=0; i<10; i++)
{
    printf("Number Entered: %d\n", num[i]);
}

    printf("\nLargest Number = %d\n", large);
    printf("Smallest Number = %d\n", small);

    return 0;

}