/*
FILENAME        : cenaAd_LE7_13.C
DESCRIPTION     : Create a program that lets the user choose an operation (power problem solver, factorial problem solver, or finding roots for quadratic equations using quadratic formula) from the menu. 
                  The program will always go back to the menu and lets the user choose again an operation until the user would like to quit using the app
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 16 November 2021
*/

#include <stdio.h>
#include <math.h>

void displayMenu ();
int powerSolver (int base, int p);
int factorialSolver(int num);
int quadraticSolver (int a, int b, int c);
float firstRoot, secondRoot;

int main ()
{
    int select;
    displayMenu ();
    printf("\n");
    return 0;
}
    void displayMenu ()
    {    
            int select;
            do {
                printf("1. Power Problem Solver\n");
                printf("2. Factorial Problem Solver\n");
                printf("3. Quadratic Equation Root Solver\n");
                printf("4. Quit Program\n");
                printf("Select the Number of your choice of Solver: ");
                    scanf("%d", &select);

                        //Power Problem Solver (powerSolver (int base, int p))
                        if (select == 1)
                        {
                            int base, p, result;

                            printf("\nPower Problem Solver\n");
                            printf("Enter your Number: ");
                                scanf("%d", &base);
                            printf("Enter the Power: ");
                                scanf("%d", &p);

                            if ((base >= 0 && base <= 100) && (p >= 0 && p <= 100))
                            {
                                result = powerSolver (base, p);
                                printf("The base number %d raised to the power of %d is %d\n\n", base, p, result);
                            }
                            else
                            {
                                printf("\nInvalid Input\n\n");
                            }
                        }

                        // Factorial Problem Solver (factorialSolver (int num))
                        if (select == 2)
                        {
                            int num;
                            int result;

                            printf("\nFactorial Problem Solver\n");
                            printf("Enter your Number: ");
                                scanf("%d", &num);
                            
                            if (num >= 0)
                            {
                                result = factorialSolver (num);
                                printf("The factorial of %d is %d\n\n", num, result);
                            }
                            else
                            {
                                printf("\nInvalid Input\n\n");
                            }
                        }

                        //Quadratic Equation Roots Solver (quadraticSolver (int a, int b, int c))
                        if(select == 3) 
                        {
                            int a, b, c, singleRoot;
                            int discriminate;

                            printf("\nQuadratic Equation Roots Solver\n");
                            printf("Enter the values of a: ");
                                scanf("%d", &a);
                            printf("Enter the values of b: ");
                                scanf("%d", &b);
                            printf("Enter the values of c: ");
                                scanf("%d", &c);

                            discriminate = quadraticSolver (a, b, c);

                            if (a==0 && b==0)
                            {
                                printf("No solution.\n\n");
                            }
                            else if (a==0)
                            {
                                singleRoot = -c/b;
                                printf("The root is: %d\n\n", singleRoot);
                            }
                            else if (discriminate < 0) 
                            {
                                printf("No real roots.\n\n");
                            }
                            else
                            {
                                firstRoot = ((- b + sqrt(discriminate)) / (2*a));
                                secondRoot = ((- b - sqrt(discriminate)) / (2*a));
                                printf("The roots are: %.3f, %.3f\n\n", firstRoot, secondRoot);
                            }
                        }
                } while (select != 4);

            return;
    }


int powerSolver (int base, int p)
{
        int answer = 0;
        answer = pow(base, p);
        return answer; 
}
int factorialSolver(int num)
{
    int numBase = num;
    int factorial = 1;

    while (num > 0)
    {
        factorial*=num;
        num--;
    }

    return factorial;
}
int quadraticSolver (int a, int b, int c)
{
    int discriminate = (b*b)-(4*a*c);
    return discriminate;
}