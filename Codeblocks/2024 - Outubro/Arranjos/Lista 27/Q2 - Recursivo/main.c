#include <stdio.h>
#include <stdlib.h>
#define TAM 7

void escInver(char A[], int i) {
    printf(" %c", A[i]);

    if(i == 0) {
        printf("\n");
        return 0;
    } else escInver(A, i-1);
}

int main()
{
    char* nome = "Lucindo";

    escInver(nome, TAM-1);

    return 0;
}
