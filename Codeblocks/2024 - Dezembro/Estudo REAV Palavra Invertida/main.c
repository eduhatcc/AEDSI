#include <stdio.h>
#include <stdlib.h>
#define TAM 4

void escreveInvertidoRec(char palavra[], int N)
{
    if(N > 0){
        printf("%c", palavra[N-1]);
        escreveInvertidoRec(palavra, N-1);
    }
}

void escreveInvertido2(char palavra[], int i)
{
    printf("%c", palavra[i]);
}

void escreveInvertido(char palavra[])
{
    printf("\tIterativo: \n");
    for(int i=TAM-1; i >= 0; i--){
        escreveInvertido2(palavra, i);
    }
    printf("\n");
}

int main()
{
    char palavra[] = {"ROMA"};

    escreveInvertido(palavra);

    printf("\n\tRecursivo: \n");
    escreveInvertidoRec(palavra, TAM);
    printf("\n");

    return 0;
}
