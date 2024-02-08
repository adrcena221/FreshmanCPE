/*
FILENAME        : cenaAd_LE8_11.C
DESCRIPTION     : Write a function that sets up an array called days, which contains pointers to the names of the days of the week and return the name of the day from the given day. The function accepts the given day.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 03 December 2021
*/

#include <stdio.h>

char *week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int weekday(int *days);

int main () 
{ 

        int days;

        printf("Enter day: ");
        scanf("%d", &days);

        weekday(&days);
        if (weekday(&days))
        {
        printf("Day of the week: %s\n", week[days-1]);
        }
        else
        {
        printf("Day of the week: INVALID\n");
        }
        return 0;
}
int weekday(int *days)
{
        int weekday;
        if (*days > 0 && *days < 8)
        {
                weekday = 1;
        }
        else
        {
                weekday = 0;
        }
        return weekday;
}



