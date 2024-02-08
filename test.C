#include <stdio.h>

int multiply (int, int);

int main ()
{
    int prod, a, b;

    scanf("%d", &a);
    scanf("%d", &b);
    prod = multiply(a,b);
    printf("\nResult: %d * %d = %d", a, b, prod);
    return 0;
}

int multiply (int m, int n)
{
    int static cnt;
    int retval;

    printf("\nCount: %d", ++cnt);
    printf("\n\t(%d,%d)", m, n);

    if (n == 0)
    {
        retval = 0;
    }
    else if (n==1)
    {
        retval = m;
    }
    else
    {
        retval = m + multiply (m, n - 1);
    }
    return retval;
}