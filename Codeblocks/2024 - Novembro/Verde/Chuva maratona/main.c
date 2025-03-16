
#include <stdio.h>
#include <stdlib.h>
#define _MAX 500

void lerLinhaAndColuna(char c[][_MAX], int n)
{
    for(int i=0; i < n; i++) {
        scanf("%s", c[i]);
    }
}

void escorrer(char c[][_MAX], int n, int m)
{
    for(int h = 0; h < n; h++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(c[i][j] == '.') {
                    if(c[i-1][j] == 'o' || ((c[i][j-1]) == 'o' && (c[i+1][j-1] == '#'))
                    || ((c[i][j+1] == 'o') && (c[i+1][j+1] == '#')))
                        {
                            c[i][j] = 'o';
                        }
                }
            }
        }
    }
}

void escreveEscorrimento(char c[][_MAX], int n)
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

    lerLinhaAndColuna(c, n);

    escorrer(c, m, n);

    escreveEscorrimento(c, n);

    return 0;
}
