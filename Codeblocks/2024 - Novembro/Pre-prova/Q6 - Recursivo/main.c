#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct
{
    char nome[TAM][20];
    int idade[TAM];
} Pessoa;

void listeInvertido(Pessoa pessoas, int i)
{
    if(i == 0) {
        printf("\nNome: %s", pessoas.nome[i]);
        printf("\nIdade: %d\n", pessoas.idade[i]);
    } else {
        printf("\nNome: %s", pessoas.nome[i]);
        printf("\nIdade: %d\n", pessoas.idade[i]);
        listeInvertido(pessoas, i-1);
    }
}

int main()
{
    Pessoa pessoas = {
        .nome = {"Eduardo", "Patricia", "Sonia", "Lucas", "Nathalia"},
        .idade = {20, 20, 60, 31, 31}
    };

    listeInvertido(pessoas, TAM-1);

    return 0;
}
