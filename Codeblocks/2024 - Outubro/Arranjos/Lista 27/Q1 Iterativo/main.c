#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void escInver(float vet[]) {
    for(int i=TAM-1; i>=0; i--) {
        printf("%.1f, ", vet[i]);
    }

    printf("\n");
}

int main()
{
    float vet[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    escInver(vet);

    return 0;
}
