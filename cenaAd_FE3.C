#include <stdio.h>

#define M 5
#define N 2

void swapNum(int numArray[M][N]);
void printSwappedNum(int numArray[M][N]);

int main()
{
    int i, j;
    int numArray[M][N];

    for(i = 0; i < 5; i++)
    {
        printf("Enter number for A1: ");
        scanf("%d", &numArray[i][1]);
        printf("Enter number for A2: ");
        scanf("%d", &numArray[i][2]);
    }

    swapNum(numArray);
    printSwappedNum(numArray);
    return 0;
}

void printSwappedNum(int numArray[M][N])
{
    int j;
    for (j = 0; j <5; j++)
    {
        printf("%d", numArray[j][1]);
        printf("%d\n", numArray[j][2]);
    }
}

void swapNum(int numArray[M][N])
{
    int i;
    int temp;
    for (i = 0; i < 5; i++)
    {
        temp = numArray[i][1];
        numArray[i][1] = numArray[i][2];
        numArray[i][2] = temp;
    }
}

