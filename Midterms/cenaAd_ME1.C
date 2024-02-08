#include <stdio.h>
    int main() 
    {
        int num;

        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0)
        {
            if (num == 1)
            {
                printf("%d - Monday", num);
            }
            else if (num == 2)
            {
                printf("%d - Tuesday", num);
            }
            else if (num == 3)
            {
                printf("%d - Wednesday", num);
            }
            else if (num == 4)
            {
                printf("%d - Thursday", num);
            }
            else if (num == 5)
            {
                printf("%d - Friday", num);
            }
            else if (num == 6)
            {
                printf("%d - Saturday", num);
            }
            else if (num == 7)
            {
                printf("%d - Sunday", num);
            }
        }
        else
        {
            printf("Invalid Input");
        }

        return 0;
    }
