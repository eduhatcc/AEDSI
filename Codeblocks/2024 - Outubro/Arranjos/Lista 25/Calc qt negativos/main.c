#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n = 0;
float array[];
int qt = 0;

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

void qtNegRecursiva(int j) //Recursivo
{
    if(j == n)
    {
        printf("\nQuantidade de numeros negativos = %d\n", qt);
        return 0;
    }

    if(array[j] < 0)
    {
        qt++;
    }

    qtNegRecursiva(j+1);
}

void qtNegIterativa() //Iterativo
{
    for(int i=0; i < n; i++)
    {
        if(array[i] < 0)
        qt++;
    }

    printf("\nQuantidade de numeros negativos = %d", qt);
}

int main()
{
    int resp;
    bool erro;
        lerQnt();
        do{
            printf("\n\tComo voce deseja fazer seu calculo?");
            printf("\n[1] Iterativo ");
            printf("\n[2] Recursivo ");
            printf("\n\tDigite: ");
            scanf("%d", &resp);
            erro = resp < 1 || resp > 2;
            if(erro)
            {
                printf("\nValor digitado incorreto! Tente novamente.\n");
            }
        }while(erro);

        switch(resp)
        {
            case 1: qtNegIterativa();
                    break;
            case 2: qtNegRecursiva(0);
                    break;
        }

    return 0;
}
