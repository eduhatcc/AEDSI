#include <stdio.h>

// Função que verifica se o ano é bissexto
int eh_bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1; // Ano bissexto
    }
    return 0; // Não é bissexto
}

// Função para obter a resposta do usuário
char obter_resposta() {
    char resposta;
    while (1) {
        printf("Deseja verificar outro ano? (S/N): ");
        scanf(" %c", &resposta);
        resposta = toupper(resposta); // Converte para maiúsculo
        if (resposta == 'S' || resposta == 'N') {
            return resposta;
        }
        printf("Resposta invalida. Por favor, responda com 'S' para Sim ou 'N' para Nao.\n");
    }
}

int main() {
    int ano;
    char resposta;

    do {
        printf("Digite um ano para verificar se eh bissexto: ");
        if (scanf("%d", &ano) != 1) {
            printf("Entrada inválida. Por favor, digite um número inteiro.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;
        }

        if (eh_bissexto(ano)) {
            printf("O ano %d eh bissexto.\n", ano);
        } else {
            printf("O ano %d nao eh bissexto.\n", ano);
        }

        resposta = obter_resposta();
    } while (resposta == 'S');

    printf("Obrigado por usar o programa. Ate mais!\n");

    return 0;
}
