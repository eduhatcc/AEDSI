#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 50
#define TAM 6
typedef struct
{
    char nome[MAX_STR];
    float salario;
} Funcionarios;

float mediaTotal(Funcionarios funcionarios[])
{
    float media = 0;
    float soma = 0;
    int i = 0;

    while(i < TAM) {
        soma += funcionarios[i].salario;
        i++;
    }
    media = soma/i;

    return media;
}

int acimaMedia(Funcionarios funcionarios[], float media)
{
    int acima = 0;

    for(int i=0; i < TAM; i++) {
        if(funcionarios[i].salario > media) {
            acima++;
        }
    }

    return acima;
}

int main()
{
    Funcionarios funcionarios[TAM] = {
        {"Eduardo", 500,10},
        {"Patricia", 700,35},
        {"Lucas", 1500,20},
        {"Nathalia", 900,00},
        {"Sonia", 2300,50},
        {"Paulo", 1600,75}
    };

    float media = mediaTotal(funcionarios);
    printf("\nMedia total = %.2f\n", media);

    printf("\nAcima da media = %d\n", acimaMedia(funcionarios, media));

    return 0;
}
