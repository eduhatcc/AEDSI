#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Soma de 2 valores\n");

    float *A = malloc(sizeof(float));
    printf("\nDigite o primeiro valor: ");
    scanf("%f", A);

    float *B = malloc(sizeof(float));
    printf("\nDigite o segundo valor: ");
    scanf("%f", B);

    float *soma = malloc(sizeof(float));
    *soma = *A + *B;
    printf("\n%.2f + %.2f = %.2f", *A, *B, *soma);

    return 0;
}
