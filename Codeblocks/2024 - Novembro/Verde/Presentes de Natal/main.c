#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PRESENTES 100
#define MAX_NOME 10

typedef struct {
    char nome[MAX_NOME];
    int preco;
    int preferencia;
} Presente;

typedef struct {
    char nome[MAX_NOME];
    Presente presentes[MAX_PRESENTES];
    int quantidadePresentes;
} ListaDesejos;

int lerDesejos(ListaDesejos* listas) {
    int totalListas = 0;
    while(scanf("%s%d", listas[totalListas].nome, &listas[totalListas].quantidadePresentes) == 2) {
        for(int i = 0; i < listas[totalListas].quantidadePresentes; i++) {
            scanf("%s%d%d", listas[totalListas].presentes[i].nome, &listas[totalListas].presentes[i].preco, &listas[totalListas].presentes[i].preferencia);
        }
        totalListas++;
    }
    return totalListas;
}

int compararPresentes(const void* a, const void* b) {
    Presente* presenteA = (Presente*)a;
    Presente* presenteB = (Presente*)b;

    int resultado = presenteB->preferencia - presenteA->preferencia;

    if(resultado == 0) {
        resultado = presenteA->preco - presenteB->preco;
    }

    if(resultado == 0) {
        resultado = strcmp(presenteA->nome, presenteB->nome);
    }

    return resultado;
}


void exibirLista(ListaDesejos lista) {
    for (int i = 0; i < lista.quantidadePresentes - 1; i++) {
        for (int j = 0; j < lista.quantidadePresentes - i - 1; j++) {
            if (compararPresentes(&lista.presentes[j], &lista.presentes[j + 1]) > 0) {
                Presente temp = lista.presentes[j];
                lista.presentes[j] = lista.presentes[j+1];
                lista.presentes[j+1] = temp;
            }
        }
    }

    printf("Lista de %s\n", lista.nome);
    for(int i = 0; i < lista.quantidadePresentes; i++) {
        printf("%s - R$%.2f\n", lista.presentes[i].nome, lista.presentes[i].preco / 100.0);
    }
    printf("\n");
}


int main() {
    ListaDesejos listas[MAX_PRESENTES];
    int totalListas = lerDesejos(listas);
    for(int i = 0; i < totalListas; i++) {
        exibirLista(listas[i]);
    }
    return 0;
}
