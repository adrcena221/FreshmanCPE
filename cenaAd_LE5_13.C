/*
FILENAME        : cenaAd_LE4_13.C
DESCRIPTION     : Create a program that lets the user choose an operation (power problem solver, factorial problem solver, or finding roots for quadratic equations using quadratic formula) from the menu. 
                  The program will always go back to the menu and lets the user choose again an operation until the user would like to quit using the app
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 17 September 2021
*/

#include <stdio.h>
#include <math.h>

    int main () {

            int base, select, power, num;
            float a, b, c;

            do{
                int answer = 0, factorial = 1;
                printf("1. Power Problem Solver\n");
                printf("2. Factorial Problem Solver\n");
                printf("3. Quadratic Equation Root Solver\n");
                printf("4. Quit Program\n");
                printf("Select the Number of your choice of Solver: ");
                    scanf("%d", &select);

                        //Power Problem Solver
                        if(select == 1) 
                        {
                            printf("Enter your Number: ");
                                scanf("%d", &base);
                            printf("Enter the Power: ");
                                scanf("%d", &power);
                            answer = pow(base, power);
                            printf("The base number %d raised to the power of %d is %d\n\n", base, power, answer);
                        }

                        // Factorial Problem Solver
                        if(select == 2) 
                        {
                            printf("Enter your Number: ");
                                scanf("%d", &num);
                            int numBase = num;

                            while (num > 0)
                            {
                                factorial*=num;
                                num--;
                            }
                            printf("The factorial of %d is %d\n\n", numBase, factorial);
                        }

                        //Quadratic Equation Roots Solver
                        if(select == 3) 
                        {
                            printf("Enter the values of a: ");
                                scanf("%f", &a);
                            printf("Enter the values of b: ");
                                scanf("%f", &b);
                            printf("Enter the values of c: ");
                                scanf("%f", &c);
                        float discriminate = (b*b)-(4*a*c);

                        if(a==0 && b==0) 
                        {
                            printf("No solution.\n\n");
                        }

                        else if (a==0) 
                        {
                            float singleRoot = -c/b;
                            printf("The root is: %.3f\n\n", singleRoot);
                        }
                        else if (discriminate < 0) 
                        {
                            printf("No real roots.\n\n");
                        }
                        else 
                        {
                            float firstRoot = ((- b + sqrt(discriminate)) / (2*a));
                            float secondRoot = ((- b - sqrt(discriminate)) / (2*a));

                            printf("The roots are: %.3f, %.3f\n\n", firstRoot, secondRoot);
                        }

                        }
            } while(select != 4);

            return 0;
    }