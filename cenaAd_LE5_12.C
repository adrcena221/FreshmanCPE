/*
FILENAME        : cenaAd_LE4_13.C
DESCRIPTION     : Program that will ask the correct numeric passcode before the user can continue his task. The user is given only three trials to enter the correct passcode. When the user hit the correct passcode the program will display “ACCESS GRANTED”, otherwise it will display “ACCESS DENIED” after three attempts.
AUTHOR          : Adrian Miguel R. Cena
CREATED ON      : 17 September 2021
*/

#include <stdio.h>
    int main () {
        int password = 1212, attempts = 1, pass;

        do {
            printf("Input Password: ");
                scanf("%d", &pass);

            if (pass == password) {
                printf("ACCESS GRANTED\n");
            }
            else if (attempts == 3){
                printf("ACCESS DENIED\n");
            }
                attempts++;
        } while (password != pass && attempts <= 3);

        return 0;
    }