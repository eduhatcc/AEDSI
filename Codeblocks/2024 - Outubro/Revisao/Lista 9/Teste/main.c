#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_i = 1; // Inicializa com um valor diferente de 0 para entrar no loop
    int valor_total = 0; // Inicializa o valor total como 0
    int par = 0; // Inicializa o contador de pares como 0

    while (num_i != 0) {
        printf("\nDigite os numeros (0 para sair): ");
        scanf("%d", &num_i);

        valor_total += num_i; // Soma o número ao valor total
    }

    // Corrigindo o loop for
    for (int i = 1; i <= valor_total; i++) {
        if (i % 2 == 0) {
            par++; // Incrementa o contador de pares
        }
    }

    printf("\n%d numeros sao pares!\n", par); // Exibe a quantidade de números pares

    return 0;
}
