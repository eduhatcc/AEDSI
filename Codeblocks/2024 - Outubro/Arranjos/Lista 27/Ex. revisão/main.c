#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 50

int TAM = 0;

void apresentacao()
{
    printf("Bem vindo ao programa!\n");
}

void lerPalavra()
{
    char* palavra;
    printf("\nDigite a palavra para verificar se eh palindromo: ");
    scanf("%s", &palavra);
}

void qtLetras(char palavra[])
{
    while(palavra[TAM] != '\0') {
        TAM+1;
    }
}

void contrario(char palavra[], char palavraContrario[])
{
    qtLetras(palavra);

    for(int i = 0; i < TAM-1; i++) {
        palavraContrario[i] = palavra[TAM-i-1];
    }
    palavraContrario[TAM] = '\0';
}

bool palindromo(char palavra[])
{
    char palavraContrario[MAX];
    contrario(palavra, palavraContrario);

    int i = 0;
    bool iguais = true;

    while(iguais && palavra[i] != '\0') {
        if(palavra[i] != palavraContrario[i]) {
            iguais = false;
        }
        i++;
    }

    return iguais;
}

int main()
{
    apresentacao();

    char palavra[MAX];
    lerPalavra(palavra);

    if(palindromo(palavra)){
        printf("\nSao palindromos!\n");
    } else {
        printf("\nNao sao palindromos!\n");
    }

    return 0;
}
