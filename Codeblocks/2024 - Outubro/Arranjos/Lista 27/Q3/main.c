#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 5

void preenche(char str[], int vet[]) {
    for(int i=0; i < TAM; i++) {
        str[i] = toupper(str[i]);
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            printf("%i ", i);
        }
    }
    printf("\n");
}

int main()
{
    char str[TAM] = "Areia";
    int vet[TAM];

    preenche(str, vet);

    return 0;
}
