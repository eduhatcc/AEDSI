#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2;

    // Solicita ao usuário que digite dois números reais
    printf("Digite o primeiro número real: ");
    scanf("%lf", &num1);
    printf("Digite o segundo número real: ");
    scanf("%lf", &num2);

    // Verifica qual é o maior número
    double maior, menor;
    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    // Calcula a diferença entre o maior e o menor valor
    double diferenca = maior - menor;

    // Mostra na tela o resultado
    printf("%.2lf - %.2lf = %.2lf\n", maior, menor, diferenca);

    return 0;
}
