#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#define MAX_LIN 3
#define MAX_COL 3

int totalNum()
{
    return MAX_LIN * MAX_COL;
} // Retorna a quantidade de números que o usuário deve digitar

void lerMatriz(float M[MAX_LIN][MAX_COL])
{
    int c = 1;

    for(int i=0; i < MAX_LIN; i++)
    {
        for(int j=0; j < MAX_COL; j++)
        {
            printf("\nDigite o %i.o numero: ", c);
            scanf("%f", &M[i][j]); //Apenas está lendo os valores digitados
            c++;
        }//fim if j
    }//fim if i
}

void escreveMatriz(float M[MAX_LIN][MAX_COL])
{
    for(int i=0; i < MAX_LIN; i++)
    {
        for(int j=0; j < MAX_COL; j++)
        {
            printf("\t%.2f", M[i][j]);
        } // Apenas está escrevendo normalmente
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
        printf("\nQual linha voce deseja verificar? [1, 2 ou 3]: ");
        scanf("%i", &linha);
        erro = linha < 1 || linha > 3;
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

float menorValorLinha(float M[][MAX_COL], int linha)
{
    float menor = M[linha][0];

    for(int i = 1; i < MAX_COL; i++)
    {
        if(M[linha][i] < menor)
        {
            menor = M[linha][i];
        }

    }

    return menor;
}

void escreveDiagonalMatriz(float M[MAX_LIN][MAX_COL])
{
    for(int i=0; i < MAX_LIN; i++) {
        printf("\t%.2f", M[i][i]);
    }
}

float lerMaiorDiagonal(float M[MAX_LIN][MAX_COL])
{
    int maior_acima = M[0][1];  // Inicializa com o primeiro valor da diagonal acima
    int maior_abaixo = M[1][0];  // Inicializa com o primeiro valor da diagonal abaixo

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

    // Retorna a diferença, considerando se algum valor não foi encontrado

    return maior_acima - maior_abaixo;
}

float lerMenorDiagonal(float M[MAX_LIN][MAX_COL])
{
    int menor_acima = M[0][1];  // Inicializa com o primeiro valor da diagonal acima
    int menor_abaixo = M[1][0];  // Inicializa com o primeiro valor da diagonal abaixo

    for(int i = 0; i < MAX_LIN; i++) {
            for(int j = 0; j < MAX_COL; j++) {
                // Acima da diagonal principal
                if (j > i) {
                    if (M[i][j] < menor_acima) {
                        menor_acima = M[i][j];
                    } // Fim if
                // Abaixo da diagonal principal
                } else if (j < i) {
                    if (M[i][j] < menor_abaixo) {
                        menor_abaixo = M[i][j];
                    } // Fim if
                } // Fim else if
            } // Fim for j
        } // Fim de i

    // Retorna a diferença, considerando se algum valor não foi encontrado

    return menor_acima - menor_abaixo;
}

int main()
{

    printf("\tDigite %i numeros na primeira matriz\n", totalNum()); // Exibe a quantidade de números a ser digitado
    float M1[MAX_LIN][MAX_COL];
    lerMatriz(M1);

    printf("\n\n\tDigite %i numeros na segunda matriz\n", totalNum()); // Exibe a quantidade de números a ser digitado
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
        do{         // Menu
            printf("\n\n\tEscolha a sua opcao: ");
            printf("\n[0] Sair");
            printf("\n[1] Maior valor de uma linha especifica");
            printf("\n[2] Menor valor de uma linha especifica");
            printf("\n[3] Escrever diagonal principal");
            printf("\n[4] Amplitude dos maiores valores acima e abaixo da diagonal principal");
            printf("\n[5] Amplitude dos menores valores acima e abaixo da diagonal principal");

            printf("\n\tDigite: ");
            scanf("%d", &resp);
            erro = resp < 0 || resp > 5;
            if(erro)
            {
                printf("\nValor digitado incorreto! Tente novamente.\n");
            }
        }while(erro);

        switch(resp)
        {
            case 0: printf("\nObrigado por usar o programa!\n");
                    break;

            case 1: {
                        int linha = lerLinha();
                        float maior1 = maiorValorLinha(M1, linha);
                        printf("\nO maior valor da linha %i da primeira matriz eh = %.2f", linha+1, maior1);

                        float maior2 = maiorValorLinha(M2, linha);
                        printf("\nO maior valor da linha %i da segunda matriz eh = %.2f", linha+1, maior2);
                        break;
            }
            case 2: {
                        int linha = lerLinha();
                        float menor1 = menorValorLinha(M1, linha);
                        printf("\nO menor valor da linha %i da primeira matriz eh = %.2f\n", linha+1, menor1);

                        float menor2 = menorValorLinha(M2, linha);
                        printf("\nO menor valor da linha %i da segunda matriz eh = %.2f\n", linha+1, menor2);
                        break;
            }
            case 3: {
                        printf("\nEscrevendo diagonal principal da primeira matriz...\n");
                        escreveDiagonalMatriz(M1);
                        printf("\nEscrevendo diagonal principal da segunda matriz...\n");
                        escreveDiagonalMatriz(M2);
                        break;
            }
            case 4: {
                        printf("\nAmplitude maior valor acima e abaixo da diagonal principal da Primeira Matriz = %.2f", lerMaiorDiagonal(M1));
                        printf("\nAmplitude maior valor acima e abaixo da diagonal principal da Segunda Matriz = %.2f\n", lerMaiorDiagonal(M2));
                        break;
            }
            case 5: {
                        printf("\nAmplitude menor valor acima e abaixo da diagonal principal da Primeira Matriz = %.2f", lerMenorDiagonal(M1));
                        printf("\nAmplitude menor valor acima e abaixo da diagonal principal da Segunda Matriz = %.2f\n", lerMenorDiagonal(M2));
            }

        }//fim switch
    }while(resp != 0);

    return 0;
}
