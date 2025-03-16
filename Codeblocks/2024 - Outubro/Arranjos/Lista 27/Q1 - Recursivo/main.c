#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void escInver(float A[], int i) {
    printf("%.1f, ", A[i]);

    if(i == 0) {
        printf("\n");
        return 0;
    }
    else escInver(A, i-1);
}

int main()
{
    float vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    escInver(vet, TAM-1);

    return 0;
}
