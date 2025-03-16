#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Maior entre 3 valores \n\n");

    float A;
    printf("\n Digite o primeiro valor \n\n");
    scanf("%f", &A);

    float B;
    printf("\n Digite o segundo valor \n\n");
    scanf("%f", &B);

    float C;
    printf("\n Digite o terceiro valor \n\n");
    scanf("%f", &C);

    float maior;
    if(A > B && A > C)
    {
        maior = A;
    }
    else{
        if(B > C)
        {
            maior = B;
        }
        else{
            maior = C;
        }
    }

    printf("\n O maior valor eh = %f", maior);

    return 0;
}
