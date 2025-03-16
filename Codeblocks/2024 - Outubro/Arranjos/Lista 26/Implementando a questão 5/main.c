#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

const int MAX_LIN = 3;
const int MAX_COL = 3;

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

float lerMaiorDiagonal(float M[MAX_LIN][MAX_COL])
{
    int maior_acima = M[0][1];  // Inicializa com o menor valor inteiro
    int maior_abaixo = M[1][0];  // Inicializa com o menor valor inteiro

    for(int i = 0; i < MAX_LIN; i++) {
            for(int j = 0; j < MAX_COL; j++) {
                if (j > i) { // Acima da diagonal principal
                    if (M[i][j] > maior_acima) {
                        maior_acima = M[i][j];
                    } // Fim if
                } else if (j < i) { // Abaixo da diagonal principal
                    if (M[i][j] > maior_abaixo) {
                        maior_abaixo = M[i][j];
                    } // Fim if
                } // Fim else if
            } // Fim for j
        } // Fim de i

    // Retorna a diferen�a, considerando se algum valor n�o foi encontrado

    return maior_acima - maior_abaixo;
}

//float lerMaiorDiagonalFrente(float M[MAX_LIN][MAX_COL])
//{
 //   float maior = M[0][0];

  //  for(int i=0; i < MAX_LIN; i++)
   // {
    //    for(int j=0; j < MAX_COL; j++)
    //    {
    //        if(j > i)
    //        if(M[i][i+j] > maior)
    //        {
    //            maior = M[i][i+j];
    //        } //else if(j > i)
            //{
                //if(M[i][j] > maior)
                //{
                  //  maior = M[i][i+1];
                //}//fim if de dentro
        //    } //fim else if
    //  }//fim for j
   // }//fim for i

   // return maior;
//}

void copiaMatriz(float M1[][MAX_COL], float M2[][MAX_COL])
{
    // Tentando fazer a leitura por colunas para ser diferente das demais solu��es
    for(int j=0; j < MAX_COL; j++) {
        for(int i=0; i < MAX_LIN; i++) {
            M2[i][j] = M1[i][j];
        }
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
        do{
            printf("\n\n\tEscolha a sua opcao: ");
            printf("\n[0] Sair");
            printf("\n[1] Maior valor de uma linha especifica");
            printf("\n[2] Diferen�a entre o maior e o menor");
            printf("\n[3] Copiar a primeira matriz na segunda");
            printf("\n\tDigite:");
            scanf("%d", &resp);
            erro = resp < 0 || resp > 3;
            if(erro)
            {
                printf("\nValor digitado incorreto! Tente novamente.\n");
            }
        }while(erro);

        switch(resp)
        {
            case 0: printf("\nObrigado por usar o programa!");
                    break;

            case 1: {
                        int linha = lerLinha();
                        printf("\nO maior valor da linha %i da primeira matriz eh = %.2f", linha, maiorValorLinha(M1, linha));
                        printf("\nO maior valor da linha %i da segunda matriz eh = %.2f\n", linha, maiorValorLinha(M2, linha));
                        break;
            }

            case 2: {
                        printf("\nDiferenca maior valor acima e abaixo da diagonal principal da Primeira Matriz = %.2f\n", lerMaiorDiagonal(M1));
                        printf("\nDiferenca maior valor acima e abaixo da diagonal principal da Segunda Matriz = %.2f\n", lerMaiorDiagonal(M2));
                        break;
            }

            case 3: {
                        copiaMatriz(M1, M2);
                        printf("\n\nEscrevendo a Primeira Matriz:\n");
                        escreveMatriz(M1);
                        printf("\n\nEscrevendo a Segunda Matriz:\n");
                        escreveMatriz(M2);
                        break;
            }
        }//fim switch
    }while(resp != 0);

    return 0;
}
