#include <stdio.h>
#include <stdlib.h>

int qtIguaisRec(int A[], int B[], int N)
{
    int qt = 0;

    if(N > 0){
        if(A[N-1] == B[N-1]){
            qt = 1;
        }
        qt += qtIguaisRec(A, B, N-1);
    }
    return qt;
}

int qtIguais(int A[], int B[])
{
    int qt = 0;

    for(int i=0; i < 10; i++){
        if(A[i] == B[i]){
            qt++;
        }
    }
    return qt;
}

int main()
{
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int B[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int qt = qtIguais(A, B);

    int qtRec = qtIguaisRec(A, B, 10);

    printf("[Iterativo] Iguais = %d\n", qt);

    printf("\n[Recursivo] Iguais = %d\n", qtRec);

    return 0;
}
