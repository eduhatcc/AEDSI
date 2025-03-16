#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int TAM = 5;

typedef struct
{
    char nome[MAX];
    int idade;
} Pessoa;

void listaInvertido(Pessoa pessoas[], int i)
{
    if(i == 0) {
        printf("\nNome: %s", pessoas[i].nome);
        printf("\nIdade: %d\n", pessoas[i].idade);
    }

    if(i > 0) {
        printf("\nNome: %s", pessoas[i].nome);
        printf("\nIdade: %d\n", pessoas[i].idade);
        listaInvertido(pessoas, i-1);
    }
}

int main()
{
    listaInvertido(pessoas, TAM-1);
    return 0;
}
