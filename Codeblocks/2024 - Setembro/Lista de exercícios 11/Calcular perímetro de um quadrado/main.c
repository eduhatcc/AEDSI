#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// LER LADO DIGITADO
float lerLado() {
    float lado;
    printf("\nDigite o valor do lado do quadrado: ");
    scanf("%f", &lado);
    return lado;
}

// CALCULAR O PERÍMETRO QUADRADO
float calcularPerimetro(float lado) {
    return 4 * lado;
}

// ESCREVER O RESULTADO
void escreva(perimetro) {
    printf("\nO perimetro do quadrado eh: %.2f\n", perimetro);
}

// MAIN PRINCIPAL
int main()
{
    float lado;
    float perimetro;

    // LER O VALOR DO LADO
    lado = lerLado();

    // CALCULAR O PERIMETRO
    perimetro = calcularPerimetro(lado);

    // ESCREVER O RESULTADO DO PERÍMETRO
    escreva(perimetro);

    return 0;
} // FIM DA MAIN
