/*
FILENAME        : cenaAd_LE3_11.C
DESCRIPTION     : Program in C that asks for user’s yearly pay and displays his weekly pay
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 07 September 2021
*/


#include <stdio.h>
    int main() {

        float yearlyPay;
        float weeklyPay;

        /*Yearly pay input*/
        printf("Enter your yearly pay PHP:");
        scanf("%f", &yearlyPay);

        /*Computation of weekly pay*/
        weeklyPay = yearlyPay / 52.0;
        printf("\n Your weekly pay is %.2f.", weeklyPay);

        return 0;
    }