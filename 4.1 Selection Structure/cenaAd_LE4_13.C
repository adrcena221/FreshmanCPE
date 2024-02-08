/*
FILENAME        : cenaAd_LE4_13.C
DESCRIPTION     : Determine a student’s final grade and indicate whether it is passing or failing. The final grade is calculated as the average of four marks (between 0 and 100). Passing grade of 50.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 17 September 2021
*/


#include <stdio.h>
    int main () {

        float average;
        float mark1, mark2, mark3, mark4;


        printf("Enter your 1st Mark: ");
            scanf("%f", &mark1);
        printf("Enter your 2nd Mark: ");
            scanf("%f", &mark2);
        printf("Enter your 3rd Mark: ");
            scanf("%f", &mark3);
        printf("Enter your 4th Mark: ");
            scanf("%f", &mark4);

        // Set inputs to only range from 0 - 100
        if (mark1 >= 0 && mark1 <= 100 && mark2 >= 0 && mark2 <= 100 && mark3 >= 0 && mark3 <= 100 && mark4 >=0 && mark4 <= 100) 
    {

        average = (mark1 + mark2 + mark3 + mark4)/4;

        if (average < 50) {
            printf("Final Grade: %.2f\n", average);
            printf("REMARKS: FAILED \n");
        }
        else {
            printf("Final Grade: %.2f\n", average);
            printf("REMARKS: PASSED \n");
        }
    }

        else {
            printf("INVALID INPUT!\n");
        }

        return 0;
        
    }