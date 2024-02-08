#include <stdio.h>
#define C1 32
#define C2 5/9

    int main() 
    {
        float tF, bodyTempC;

        printf("Enter temp in F: ");
        scanf("%f", &tF);

        bodyTempC = (tF - C1)*C2;
        printf("\n Body Temperature = %.3f", bodyTempC);

        if(bodyTempC > 38.3)
        {
            printf("\nHyperpyrexia");
        }
        else if(bodyTempC >= 37.5 && bodyTempC <= 38.3)
        {
            printf("\nFever");
        }
        else if(bodyTempC >= 36.5 && bodyTempC <= 37.5)
        {
            printf("\nNormal");
        }
        else
        {
            printf("\nHypothermia");
        }


        
        return 0;
    }
