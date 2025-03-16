#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int qtIguaisRec(float A[], float B[], int N)
{
    int qt = 0;

    if(N <= 0 || N > TAM){
        qt = 0;
    }
    else {
        if(A[N-1] == B[N-1]){
            qt = 1;
        }
        qt += qtIguaisRec(A, B, N-1);
    }
    return qt;
}

int qtIguais(float A[], float B[])
{
    int qt = 0;

    for(int i=0; i < TAM; i++){
        if(A[i] == B[i]){
            qt++;
        }
    }

    return qt;
}

int main()
{
    float A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float B[] = {10, 9, 3, 7, 5, 5, 7, 3, 9, 1};

    printf("\n[Iterativo] Quantidade de numeros iguais na mesma posicao = %d\n", qtIguais(A, B));
    printf("\n[Recursivo] Quantidade de numeros iguais na mesma posicao = %d\n", qtIguaisRec(A, B, TAM));

    return 0;
}
