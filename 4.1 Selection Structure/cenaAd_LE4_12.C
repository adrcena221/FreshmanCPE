/*
FILENAME        : cenaAd_LE4_12.C
DESCRIPTION     : Compute the real roots of a quadratic equation . The roots can be calculated using the following formulas: 
                It will prompt the user to enter the constants (a, b, c) and display the roots based on the following rules:
                    If both a and b are zero, there is no solution
                    If a is zero, there is only one root (-c/b).
                    If the discriminate (b2-4ac) is negative, there are no real roots
                    For all other combinations, there are two roots.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 17 September 2021
*/


#include <stdio.h>
#include <math.h>

    int main () {
        
        double discriminate, singleRoot, firstRoot, secondRoot;
        float a, b, c;

        printf("Enter the values of a, b, & c: ");
            scanf("%f %f %f", &a, &b, &c);

        discriminate = (b*b) - (4*a*c);

        if((a==0) && (b==0)) {
            printf("No solution.\n");
        }
        else if (a==0) {
            singleRoot = -c/b;
            printf("%.3lf\n", singleRoot);
        }
        else if (discriminate < 0) {
            printf("No real roots.\n");
        }
        else {
            firstRoot = ((- b + sqrt(discriminate)) / (2*a));
            secondRoot = ((- b - sqrt(discriminate)) / (2*a));

            printf("%.3lf, %.3lf\n", firstRoot, secondRoot);
        }

        return 0;

    }