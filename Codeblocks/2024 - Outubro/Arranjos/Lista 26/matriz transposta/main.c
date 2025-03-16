#include <stdio.h>
#include <stdlib.h>

const int MAX_LIN = 3;
const int MAX_COL = 2;

int totalNum()
{
    return MAX_LIN * MAX_COL;
}

void lerMatriz(float M[MAX_COL][MAX_LIN])
{
    int c = 1;

    for(int i=0; i < MAX_COL; i++)
    {
        for(int j=0; j < MAX_LIN; j++)
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

void transposta(float M1[][MAX_COL], float M2[][MAX_LIN]) {
    for(int i=0; i < MAX_LIN; i++) {
        for(int j=0; j < MAX_COL; j++) {
            M2[j][i] = M1[i][j];
        }
    }

}

void escreveMatrizTransposta(float M[MAX_COL][MAX_LIN])
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

    transposta(M1, M2);

    printf("\n\nEscrevendo a Primeira Matriz:\n");
    escreveMatriz(M1);

    printf("\n\nEscrevendo a Matriz Transposta:\n");
    escreveMatriz(M2);

    return 0;
}
