#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

const int MAX_LIN = 2;
const int MAX_COL = 4;

int totalNum()
{
    return MAX_LIN * MAX_COL;
}

void lerMatriz(float M[MAX_LIN][MAX_COL])
{
    int c = 1;

    for(int i=0; i < MAX_LIN; i++)
    {
        for(int j=0; j < MAX_COL; j++)
        {
            printf("\nDigite o %i.o numero: ", c);
            scanf("%f", &M[i][j]);
            c++;
        }
    }
}

void escreveMatriz(float M[MAX_LIN][MAX_COL])
{
    for(int i=0; i < MAX_LIN; i++)
    {
        for(int j=0; j < MAX_COL; j++)
        {
            printf("\t%.2f", M[i][j]);
        }
        printf("\n");
    }
}

float iguais(float M1[MAX_LIN][MAX_COL], float M2[MAX_LIN][MAX_COL])
{
    bool iguais = true;

    for(int i=0; i < MAX_LIN; i++)
    {
        for(int j=0; j < MAX_COL; j++)
        {
            if(M1[i][j] != M2[i][j])
            {
                iguais = false;
            }//fim if
        } //fim for j
    }//fim for i

    return iguais;
}

int lerLinha()
{
    int linha = 0;
    bool erro;
    do{
        printf("\nQual linha voce deseja verificar? [1 ou 2]: ");
        scanf("%i", &linha);
        erro = linha < 1 || linha > 2;
        if(erro)
        {
            printf("\nValor digitado incorreto! Tente novamente.\n");
        }
    }while(erro);

    return linha - 1;
}

float maiorValorLinha(float M[][MAX_COL], int linha)
{
    float maior = M[linha][0];

    for(int i = 1; i < MAX_COL; i++)
    {
        if(M[linha][i] > maior)
        {
            maior = M[linha][i];
        }

    }

    return maior;
}

int main()
{

    printf("\tDigite %i numeros na primeira matriz\n", totalNum());
    float M1[MAX_LIN][MAX_COL];
    lerMatriz(M1);

    printf("\n\n\tDigite %i numeros na segunda matriz\n", totalNum());
    float M2[MAX_LIN][MAX_COL];
    lerMatriz(M2);

    printf("\n\nEscrevendo a primeira Matriz:\n");
    escreveMatriz(M1);

    printf("\n\nEscrevendo a segunda Matriz:\n");
    escreveMatriz(M2);

    if(iguais(M1, M2))
    {
        printf("\nMatrizes iguais!\n");
    }
    else {
            printf("\nMatrizes diferentes!\n");
    }

    int resp;
    bool erro;
    do{
        printf("\n\n\tVoce deseja saber o maior valor de uma linha especifica?");
        printf("\n[1] Nao! \n[2] Sim!\n");
        printf("\n\tDigite:");
        scanf("%d", &resp);
        erro = resp < 1 || resp > 2;
        if(erro)
        {
            printf("\nValor digitado incorreto! Tente novamente.\n");
        }
    }while(erro);

    int linha = lerLinha();

    switch(resp)
    {
        case 1: printf("\nObrigado por usar o programa!");
                break;

        case 2: printf("\nO maior valor da linha %i da primeira matriz eh = %.2f", linha, maiorValorLinha(M1, linha));
                printf("\nO maior valor da linha %i da segunda matriz eh = %.2f\n", linha, maiorValorLinha(M2, linha));
                break;
    }

    return 0;
}
