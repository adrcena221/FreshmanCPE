/*
FILENAME        : cenaAd_LE4_13.C
DESCRIPTION     : Program that will ask 10 integers and display the average of all even numbers and the product of all odd numbers entered by the user
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 17 September 2021
*/

#include <stdio.h>
#include <conio.h>

     int main() {

         int evenSum = 0, prodOdd = 1;
         int evenCount = 0;
         float averageEven;
         int i, numInput;


         printf("Enter 10 Integers\n\n");

         for(i=1; i<=10; i++)
         {
            printf("Number %d: ", i);
            scanf("%d", &numInput);

            if (numInput%2==0)
            {
               evenSum+=numInput;
               evenCount++;

            }
            else 
            {
               prodOdd*=numInput;
            }
         }

         averageEven =(float)evenSum/evenCount;
         printf("The average of the even integers is: %.2f\n", averageEven);
         printf("The product of odd integers is: %d\n", prodOdd);

         return 0;

   }