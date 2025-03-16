#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float LeiaReal() {
    float x;
    printf("\nDigite o valor a ser somado: ");
    scanf("%f", &x);
    return x;
} //fim LeiaReal()

float soma1 (float x, float y) {
    return x+y;
} //fim soma1

void escreva (float x, float y, float s) {
    printf("\n %.2f + %.2f = %.2f \n", x, y, s);
}

int main()
{
    printf("\nSoma de dois numeros\n\n");

    float A = LeiaReal();
    float B = LeiaReal();
    float soma = soma1 (A,B);

    escreva(A, B, soma);

    return 0;
}
