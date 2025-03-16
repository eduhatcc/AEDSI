#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_STR 50

int TAM = 3;

typedef struct
{
    char nome[MAX_STR];
    int idade;
    char cpf[14];
} Pessoa;

bool comparaStrings(char str1[], char str2[])
{
    bool igual = true;
    int i = 0;

    while(igual && str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            igual = false;
        }
        i++;
    }

    return igual;
}

bool verificaIgual(Pessoa pessoa[], int i, int j)
{
    bool igual = true;

    if(comparaStrings(pessoa[i].nome, pessoa[j].nome)) {
        if(comparaStrings(pessoa[i].cpf, pessoa[j].cpf)) {
            printf("\nFinal da comparacao\n");
        }
    } else {
        igual = false;
    }

    return igual;
}

void listaPessoas(Pessoa pessoas[], int i)
{
    if(i == 0) {
        printf("\n%s %d %s", pessoas[i].nome, pessoas[i].idade, pessoas[i].cpf);
    } else {
        printf("\n%s %d %s", pessoas[i].nome, pessoas[i].idade, pessoas[i].cpf);
        listaPessoas(pessoas, i-1);
    }
}

int main()
{
    Pessoa pessoas[TAM] = {
        {"Eduardo", 20, "12345678901"},
        {"Eduardo", 20, "12345678901"},
        {"Patricia", 20, "01987654321"}
    };

    if(verificaIgual(pessoas, 0, 1)) {
        printf("\nA pessoa 1 a pessoa 2 sao iguais!\n");
    } else {
        printf("\nA pessoa 1 e a pessoa 2 nao sao iguais!\n");
    }

    if(verificaIgual(pessoas, 0, 2)) {
        printf("\nA pessoa 1 e a pessoa 3 sao iguais!\n");
    } else {
        printf("\nA pessoa 1 e a pessoa 3 nao sao iguais!\n");
    }

    listaPessoas(pessoas, TAM-1);

    return 0;
}
