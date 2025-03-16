#include <stdio.h>
#include <stdlib.h>
#define MAX_LIN 5
#define MAX_COL 5

int diagonalSec(float M[][MAX_COL], float valor)
{
    int iguais = 0;

    for(int i = MAX_LIN-1; i >= 0; i--) {
        for(int j = 1; j <= MAX_COL-1; j++) {
            if(M[i][j] == valor) {
                iguais++;
            }
        }
    }

    return iguais;
}

int main()
{
    float matriz[MAX_LIN][MAX_COL] = {1, 2, 3, 4, 5, 1, 2, 3, 4, 6, 1, 2, 3, 6, 8, 1, 2, 6, 8, 10, 1, 6, 8, 10, 12};
    float chavePesquisa = 6;

    printf("\nHa %d valores iguais!\n", diagonalSec(matriz, chavePesquisa));

    return 0;
}
