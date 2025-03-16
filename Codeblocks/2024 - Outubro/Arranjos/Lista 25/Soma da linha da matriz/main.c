#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void apresentacao()
{
    printf("\n\tBem vindo ao programa!\n");
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
    printf("\nDigite %i numeros!\n", somaLinhasColunas(3, 3));

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

int lerLinha()
{
    int linha = 0;

    printf("\nDigite a linha que deseja fazer a soma [1 a 3]: ");
    scanf("%d", &linha);

    return linha-1;
}

float somaArray(float array[3][3], int linha)
{
    float soma = 0;

    for(int i=0; i < 3; i++)
    {
        for(int j=0; j < 3; j++)
        {
            if(i == linha)
            {
                soma += array[i][j];
            }
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
    int linha = lerLinha();

    printf("\nValor da soma da linha %d = %.2f\n", linha, somaArray(array, linha));

    return 0;
}
