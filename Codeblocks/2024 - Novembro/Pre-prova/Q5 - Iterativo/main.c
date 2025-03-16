#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10

int TAM = 5;

bool shiftMais1(float vetor[], float x)
{
    bool inseriu = false;

    if(TAM < MAX) {
        for(int i=TAM; i >= 0; i--) {
            if(i > 0) {
                vetor[i] = vetor[i-1];
            } else {
                vetor[i] = x;
                TAM++;
                inseriu = true;
            }//Fim if else
        }//Fim for
    }

    return inseriu;
}

int main()
{
    float vetor[] = {1, 2, 3, 4, 5};
    float x = 10;

    printf("\nO vetor inicial esta assim: ");
    for(int i=0; i < TAM; i++) {
        printf("%.1f, ", vetor[i]);
    }

    if(shiftMais1(vetor, x)) {
        printf("\n\nO vetor shift+1 ficou assim: ");
        for(int i=0; i < TAM; i++) {
            printf("%.1f, ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("\n\nErro! Nao ha mais espaco para inserir o novo valor!\n");
    }

    return 0;
}
