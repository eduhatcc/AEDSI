#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void apresentacao () {
    printf("Ler base e altura para calcular a area.\n\n");
}

float lerBase() {
    float base;

    printf("\nDigite a base: ");
    scanf("%f", &base);

    return base;
}

float lerAltura () {
    float altura;

    printf("\nDigite a base: ");
    scanf("%f", &altura);

    return altura;
}

float calcularArea (float x, float y) {
    float area = x*2 + y*2;
    return area;
}

void escreva(float resultado) {
    printf("O valor da area eh: %.2f \n\n", resultado);
}


int main()
{
    apresentacao();

    float base = lerBase();
    float altura = lerAltura();
    float area = calcularArea(base, altura);

    escreva(area);

    return 0;
}
