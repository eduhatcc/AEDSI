
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define _MAX 500

void lerVazamento(char c[][_MAX], int n)
{
    for(int i=0; i < n; i++) {
        scanf("%s", c[i]);
    }
}

void vazamento(char c[][_MAX], int n, int m)
{
    for(int i=0; i < n; i++) {
        for(int j=0; j < m; j++) {
            if(c[i][j] == 'o') {
                if(i+1 < n && c[i+1][j] == '#') {//Conferindo se o de baixo é #
                    if(j+1 < m && c[i][j+1] != '#') {//If vazamento para direta
                        c[i][j+1] = 'o';
                    }
                }//Fim if vazamento para direita
                if(c[i+1][j] == '.') { //If vazamento para baixo
                    c[i+1][j] = 'o';
                }//Fim if vazamento pra baixo
            }//Fim if principal 'o'
        }//Fim for j

        for(int k=m-1; k >= 0; k--) {
             if(c[i][k] == 'o') {
                if(i+1 < n && c[i+1][k] == '#') {//Conferindo se o de baixo é #
                    if(k-1 < m && c[i][k-1] != '#') {//If vazamento para esquerda
                        c[i][k-1] = 'o';
                    }
                }//Fim if vazamento para esquerda
                if(c[i+1][k] == '.') { //If vazamento para baixo
                    c[i+1][k] = 'o';
                }//Fim if vazamento pra baixo
            }//Fim if principal 'o'
        }
    }//Fim for i
}

void escreveVazamento(char c[][_MAX], int n)
{
    for(int i=0; i < n; i++) {
        printf("%s\n", c[i]);
    }
}


int main()
{
    int n = 0;
    int m = 0;
    char c[_MAX][_MAX];
    do {
        scanf("%d %d", &n, &m);
    } while(n < 3 || m < 3 || n > _MAX || m > _MAX);

    lerVazamento(c, n);

    vazamento(c, n, m);

    escreveVazamento(c, n);

    return 0;
}
