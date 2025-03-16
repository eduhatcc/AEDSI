#include <stdio.h>
#include <stdlib.h>
#define TAM 7

void escInver(char A[], int i) {
    for(int i = TAM-1; i >= 0; i--)
        printf("%c ", A[i]);

    printf("\n");
    return 0;
}

int main()
{
    char* nome = "Lucindo";

    escInver(nome, TAM-1);

    return 0;
}
