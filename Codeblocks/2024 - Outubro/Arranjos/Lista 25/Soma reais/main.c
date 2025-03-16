#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float soma = 0; // Variável global
int n = 0;
float array[];

void lerQnt()
{
    int i = 0;
    float num;

    printf("Digite [0] para sair a qualquer momento\n\n");
    do {
        printf("Digite o %i.o numero: ", i+1);
        scanf("%f", &num);
        array[n] = num;
        n++;
        i++;
    } while(num != 0 && num < 100);
}

void somaRecursiva(int i) //Recursivo
{
    if(i == n)
    {
        printf("\n%.2f", soma);
        return 0;
    }

    soma += array[i];
    somaRecursiva(i+1);
}

void somaIterativa() //Iterativo
{
    soma = array[0];

    for(int i=1; i < n; i++)
    {
        soma += array[i];
    }

    printf("\n%.2f", soma);
}

int main()
{
    lerQnt();
    int resp;
    bool erro;
    do{
        printf("\nComo voce deseja fazer seu calculo? \n[1] Iterativo \n[2] Recursivo \nDigite: ");
        scanf("%d", &resp);
        erro = resp < 1 || resp > 2;
        if(erro)
        {
            printf("\nValor digitado incorreto! Tente novamente.\n");
        }
    }while(erro);

    switch(resp)
    {
        case 1: somaIterativa();
                break;
        case 2: somaRecursiva(0);
                break;
    }

    return 0;
}
