#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _MAX 100

int lerLinha()
{
    int n;
    do {
        scanf("%d", &n);
    }while(n < 0 || n > _MAX);

    return n;
}

char lerMonotono(char monotono[], int n)
{
    int i = 0;
    char aux[n];
    scanf("%s", &aux);

    while(aux != '\0' && aux < n) {
        monotono[i] = aux[i];
        i++;
    }

    return monotono;
}

int lerMonotonoTriviais(char monotono[], int n)
{
    int i = 0;
    int cont = 0;

    while(monotono[i] != '\0') {
        if(i+1 < n && monotono[i] == 'a' && monotono[i+1] == 'a') {
                cont++;
                printf("\Alo dentro");
        }
        printf("\nAlo fora");
        i++;
    }

    return cont;
}

void escreveCont(int cont)
{
    printf("\n%d\n", cont);
}

int main()
{
    int n = lerLinha();
    char monotono[n];
    monotono[n] = lerMonotono(monotono, n);
    int cont = lerMonotonoTriviais(monotono, n);

    escreveCont(cont);


    return 0;
}
