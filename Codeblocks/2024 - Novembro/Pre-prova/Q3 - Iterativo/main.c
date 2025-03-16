#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
#define TAM 10

typedef struct
{
    char nome[TAM][MAX];
    int idade[TAM];
} Pessoa;

void pesquisaIguais(Pessoa pessoas, char* pesquisa)
{
    int n = 0;
    for(int i=0; i < TAM; i++) {
        if(!strcmp(pessoas.nome[i], pesquisa)) {
            printf("\nNome: %s", pessoas.nome[i]);
            printf("\nIdade: %d\n", pessoas.idade[i]);
            n++;
        }//Fim if
    }//Fim for

    if(n ==0) {
        printf("\nNenhum nome correspondente a chave de pesquisa.\n");
    } else {
        printf("\nForam encontrados %d nomes iguais a chave de pesquisa!\n", n);
    }
}

int main()
{
    Pessoa pessoas = {
        .nome = {"Eduardo", "Patricia", "Sonia", "Lucas", "Nathalia", "Eduardo", "Patricia", "Eduardo", "Lucas", "Eduardo"},
        .idade = {20, 20, 60, 31, 31, 22, 21, 28, 31, 25}
    };

    char chavePesquisa[MAX];
    printf("Digite o nome: ");
    scanf("%s", chavePesquisa);

    pesquisaIguais(pessoas, chavePesquisa);

    return 0;
}
