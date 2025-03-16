#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int TAM = 5;

void shiftMais1(float vetor[], float x, int i)
{
    if(TAM < MAX) {
        if(i > 0) {
            vetor[i] = vetor[i-1];
            shiftMais1(vetor, x, i-1);
        } else {
            vetor[i] = x;
            TAM++;
        }//Fim else if
    }//Fim if verificação
}

int main()
{
    float vetor[] = {1, 2, 3, 4, 5};
    float x = 10;

    printf("\nO vetor inicial esta assim: ");
    for(int i=0; i < TAM; i++) {
        printf("%.1f, ", vetor[i]);
    }

    if(shiftMais1(vetor, x, 0)) {
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
