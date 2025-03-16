#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>
#include "data.h"
#include "pessoa.h"
#define MAX_STR 50
#define MAX 100


int main()
{
    Data hoje;
    hoje.dia = 31;
    hoje.mes = 10;
    hoje.ano = 2024;
    escreveData(hoje);

    Data nascimento;
    leiaData(&nascimento);
    escreveData(nascimento);
    printf("\nO mes %s tem %i dias!\n",
           mesExtenso(nascimento),
           diasMes(nascimento)
           );

    return 0;
}
