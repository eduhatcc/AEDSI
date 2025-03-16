#include <stdio.h>
#include <stdlib.h>

#define TAM 5

typedef struct
{
    int ano[TAM];
    char campeao[TAM][20];
} Campeonato;

void listaCampeao(Campeonato time)
{
    for(int i = 0; i < TAM; i++) {
        printf("\nAno: %d", time.ano[i]);
        printf("\nCampeao: %s\n", time.campeao[i]);
    }
}

void chavePesquisa(Campeonato time, char* nome)
{
    int n = 0;
    for(int i=0; i < TAM; i++) {
        if(nome == time.campeao[i]) {
            printf("\n%s", time.campeao[i]);
            n++;
        }
    }

    printf("\n%d\n", n);
}

int main()
{
    Campeonato time = {
        .ano = {1980, 1990, 2000, 2010, 2020},
        .campeao = {"Cruzeiro", "Atletico", "Flamengo", "Cruzeiro", "Cruzeiro"}
    };

    listaCampeao(time);

    char nome[20];
    printf("\nDigite o nome do seu time: ");
    scanf("%s", nome);

    chavePesquisa(time, nome);
    return 0;
}
