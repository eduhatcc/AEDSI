#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int soma = 0; // Variável global
int n;

void somaRecursiva(int array[], int c, int i) //Recursivo
{
    if(i == c)
    {
        printf("\n%d", soma);
        return 0;
    }

    soma += array[i];
    somaRecursiva(array, c, i+1);
}

void somaIterativa(int array[]) //Iterativo
{
    soma = array[0];

    for(int i=1; i < 4; i++)
    {
        soma += array[i];
    }

    printf("\n%d", soma);
}

int main()
{
    int array[] = {10, 20, 30, 40};
    int resp;
    bool erro;
    do{
        printf("\nComo voce deseja fazer seu calculo? \n\n[1] Iterativo \n[2] Recursivo \nDigite: ");
        scanf("%d", &resp);
        erro = resp < 1 || resp > 2;
        if(erro)
        {
            printf("\nValor digitado incorreto! Tente novamente.\n");
        }
    }while(erro);

    switch(resp)
    {
        case 1: somaIterativa(array);
                break;
        case 2: somaRecursiva(array, 4, 0);
                break;
    }

    return 0;
}
