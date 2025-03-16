#include <stdio.h>
#include <stdlib.h>

int main ()
{
    //DECLARE
    float A;
    float B;
    float soma;

    //LEIA
    printf("Digite o primeiro valor da soma: \n");
    scanf("%f", &A);
    printf("Digite o segundo valor da soma: \n");
    scanf("%f", &B);
    soma = A + B;

    //ESCREVA
    printf("\n %.2f + %.2f = %.2f", A, B, soma);

    return 0;
}
