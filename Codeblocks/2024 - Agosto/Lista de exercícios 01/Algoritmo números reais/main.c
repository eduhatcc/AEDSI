#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2;

    // Solicita ao usu�rio que digite dois n�meros reais
    printf("Digite o primeiro n�mero real: ");
    scanf("%lf", &num1);
    printf("Digite o segundo n�mero real: ");
    scanf("%lf", &num2);

    // Verifica qual � o maior n�mero
    double maior, menor;
    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    // Calcula a diferen�a entre o maior e o menor valor
    double diferenca = maior - menor;

    // Mostra na tela o resultado
    printf("%.2lf - %.2lf = %.2lf\n", maior, menor, diferenca);

    return 0;
}
