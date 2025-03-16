#include <stdio.h>
#include <stdlib.h>

void apresentacao () {
    printf("Potencicao de dois valores!\n\n");
}

int potenciacao (int n) {
    int fat = 1;

    for(int i=1; i<=n; i++)
    {
        fat *= i;
    }
    return fat;
}

void escreva (int resultado) {
    printf("\n O resultado da potenciacao eh: %.1i \n\n", resultado);
}

int main()
{
    apresentacao();

    int valor;

    printf("Digite um valor inteiro para fatorar! \n");
    scanf("%i", &valor);
    int resultado = potenciacao(valor);

    escreva(resultado);

    return 0;
}
