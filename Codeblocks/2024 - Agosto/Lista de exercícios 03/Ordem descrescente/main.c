#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n Programa para ler 3 numeros e coloca-lo em ordem decrescente\n\n");

    float A;
    float B;
    float C;
    int aux;

    printf("Digite o primeiro valor: \n");
    scanf("%f", &A);

    printf("\nDigite o segundo valor: \n");
    scanf("%f", &B);


    printf("\nDigite o terceiro valor: \n");
    scanf("%f", &C);

    if(A < B)
    {
        aux = A;
        A = B;
        B = aux;
    }

    if(B < C)
    {
        aux = B;
        B = C;
        C = aux;
    }

    if(A < B)
    {
        aux = A;
        A = B;
        B = aux;
    }

    printf("\n\n %.1f %.1f %.1f", A, B, C);

    return 0;
}
