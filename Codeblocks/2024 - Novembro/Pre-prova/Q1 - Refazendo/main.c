#include <stdio.h>
#include <stdlib.h>
#define MAX_LIN 5
#define MAX_COL 5

float vizinhosMatriz(float M[][MAX_COL], int LIN, int COL)
{
    float media = 0;
    float soma = 0;
    int n = 0;

    for(int i = LIN-1; i <= LIN+1; i++) {
        for(int j = COL-1; j <= COL+1; j++) {
            if(i >= 0 && i < MAX_LIN && j >= 0 && j < MAX_LIN) {
                printf("%.1f\n", M[i][j]);
                soma += M[i][j];
                n++;
            }//Fim if
        }//Fim for j
    }//Fim for i

    if(n == 0) {
        printf("\nErro! Valores inesperados!\n");
    } else {
        media = soma/n;
    }

    return media;
}

int main()
{
    float matriz[MAX_LIN][MAX_COL] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110, 115, 120, 125};
    int linha = 2;
    int coluna = 2;

    printf("\nMedia = %.1f\n", vizinhosMatriz(matriz, linha, coluna));
    return 0;
}
