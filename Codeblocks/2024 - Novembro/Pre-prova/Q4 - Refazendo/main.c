#include <stdio.h>
#include <stdlib.h>
#define MAX_LIN 5
#define MAX_COL 5

int abaixoDiagonalSec(float M[][MAX_COL], float x)
{
    int encontrado = 0;

    for(int i = MAX_LIN-1; i > 0; i--) {
        for(int j = 1; j < MAX_COL; j++) {
            if (i + j > MAX_COL - 1) {
                if(M[i][j] == x) {
                    encontrado++;
                }//Fim if
            }
        }//Fim for j
    }//Fim for i

    return encontrado;
}

int main()
{
    float matriz[MAX_LIN][MAX_COL] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 6, 1, 2, 3, 6, 8, 1, 2, 6, 8, 10, 1, 6, 8, 10, 12};
    float valor = 2;

    printf("\nHa %d valores encontrados abaixo da diagonal secundaria!\n", abaixoDiagonalSec(matriz, valor));

    return 0;
}
