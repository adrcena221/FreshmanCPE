/*
FILENAME        : cenaAd_LE3_131.C
DESCRIPTION     : Program in C that prints the tuition for 2 semesters at ABC College. ABC charges PHP 450 for registration, plus PHP 450 per unit and a penalty of PHP 2,260 for each 12 units or fraction of 12.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 07 September 2021
*/


#include <stdio.h>
    int main () {

        const int regFee = 450;
        const int unitFee = 450;
        const int penaltyFee = 2260;

        int units1;
        int units2;
        float firstSem;
        float secondSem;
        float totalFee;

        /* Input number of unit from the user for the First Semester*/
        printf("Enter number of units for First Semester: ");
        scanf("%d", &units1);

        /* Input number of unit from the user for the Second Semester*/
        printf("Enter number of units for Second Semester: ");
        scanf("%d", &units2);


        /* */
        firstSem = regFee + ((units1) / 12.0 * penaltyFee) + (units1 * unitFee);
        secondSem = regFee + ((units2) / 12.0 * penaltyFee) + (units2 * unitFee);
        totalFee = firstSem + secondSem;

        printf("1st Semester Tuition Fee: %.2f\n", firstSem);
        printf("2nd Semester Tuition Fee: %.2f\n", secondSem);
        printf("\nYour tuition for 2 semesters at ABC College is PHP %.2f", totalFee);

        return 0;
    }