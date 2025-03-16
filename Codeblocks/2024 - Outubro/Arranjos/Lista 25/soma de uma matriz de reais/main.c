#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao()
{
    printf("Bem vindo ao programa!\n");
}

//int lerQntLinhas()
//{
  //  int linhas = 0;

    //printf("\nQual a quantidade de linhas voce deseja ter? \n\tDigite: ");
    //scanf("%d", &linhas);

    //return linhas;
//}

//int lerQntColunas()
//{
  //  int colunas = 0;

   // printf("\nQual a quantidade de linhas voce deseja ter? \n\tDigite: ");
   // scanf("%d", &colunas);

   // return colunas;
//}

int somaLinhasColunas(int L, int C)
{
    return L*C;
}

void lerNumeros(float array[3][3])
{
    printf("\n\tDigite %i numeros", somaLinhasColunas(3, 3));

    int contador = 1;
    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            printf("\nDigite o %i.o numero: ", contador);
            scanf("%f", &array[i][j]);
            contador++;
        }
    }
}

float somaArray(float array[3][3])
{
    float soma = 0;

    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            soma += array[i][j];
        }
    }

    return soma;
}

int main()
{
    apresentacao();

    //int L = lerQntLinhas();
    //int C = lerQntColunas();

    //int totalNum = somaLinhasColunas(L, C);

    float array[3][3];
    lerNumeros(array);

    printf("\nValor da soma = %.2f", somaArray(array));

    return 0;
}
