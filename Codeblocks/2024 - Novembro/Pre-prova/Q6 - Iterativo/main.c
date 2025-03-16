#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct
{
    char nome[TAM][20];
    int idade[TAM];
} Pessoa;

void listeInvertido(Pessoa pessoas)
{
    for(int i = TAM-1; i >= 0; i--) {
        printf("\n%s", pessoas.nome[i]);
        printf("\n%d\n", pessoas.idade[i]);
    }
}

int main()
{
    Pessoa pessoas = {
        .nome = {"Eduardo", "Patricia", "Sonia", "Lucas", "Nathalia"},
        .idade = {20, 20, 60, 31, 31}
    };

    listeInvertido(pessoas);

    return 0;
}
