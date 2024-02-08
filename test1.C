#include <stdio.h>
#include <string.h>

int isSortedArray (int list[], int arrSize);
int *getArray(int arrSize);

int main ()
{
        int sorted;
        int arrSize;

        int *intArray;

        print("\n Enter the size of the array: ");
        scanf("%d", arrSize);

        getArray(arrSize);

        sorted = isSortedArray(intArray, arrSize);

        printf("\nThe")
}