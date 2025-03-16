#include <stdio.h>

int main() {
    int n, pessoas = 0;
    float nota, maior = 0, menor = 100, soma = 0;

    printf("Controle de maior e menor nota da turma");

    printf("\n Tamanho da turma: ");
    scanf("%d", &n);

    while (pessoas < n) {  // corrigir a condição para processar exatamente 'n' notas
        do {
            printf("\n Digite a nota [0 a 100]: ");
            scanf("%f", &nota);
        } while (nota < 0 || nota > 100);  // validação da nota

        // Atualiza a soma das notas
        soma += nota;

        // Atualiza maior e menor nota
        if (nota > maior) maior = nota;
        if (nota < menor) menor = nota;

        pessoas++;  // contar a pessoa processada
    }

    // Calcula e exibe maior, menor e média
    float media = soma / n;
    printf("\n Maior nota = %.1f", maior);
    printf("\n Menor nota = %.1f", menor);
    printf("\n Média das notas = %.1f", media);
    printf("\n Total de pessoas: %d \n\n", n);

    return 0;
}
