#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float leiaReal () {
    float x;
    printf("\nDigite o valor: ");
    scanf("%f", &x);
    return x;
} // FIM LEIAREAL

float maior1 (float A, float B) {
    if (A > B)
        return A;
    else
        return B;
} // FIM MAIOR1

void escreva (float maior) {
    printf("\n%.2f eh o maior numero digitado.\n", maior);
} // FIM DA VOID

int main()
{
    printf("Maior entre dois valores reais\n\n");

    float A = leiaReal ();
    float B = leiaReal ();
    float maior = maior1(A,B);

    escreva(maior);

    return 0;
} // FIM DA MAIN
