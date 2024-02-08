#include <stdio.h>


int main()
{
    int x, y, z;
    int *l = &x, *m = &y, *n = &z;

    scanf("%d, %d, %d\n", l, m, n);



    printf("%d, %d, %d\n",*l, *m, *n);
    printf("Hello1");
    printf("Hello1");

    return 0;
}