#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[];
    int idade;
} Pessoa;

int TAM = 5;

void listaInvertido(Pessoa pessoas[])
{
    for(int i = TAM-1; i >= 0; i++) {
        printf("\nNome: %s", pessoas[i].nome);
        printf("\nIdade: %d", pessoas[i].idade);

    }
}

int main()
{
    listaInvertido(pessoa);
    return 0;
}
