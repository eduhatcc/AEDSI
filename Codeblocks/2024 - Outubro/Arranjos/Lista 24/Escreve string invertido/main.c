#include <stdio.h>
#include <stdlib.h>

int contaQtLetras(char* A)
{
    int cont = 0;

    while(A[cont] != '\0')
    {
        cont++;
    }

    return cont;
}

void escreveInvertido(char* A, int qt)
{
    printf(" %c", A[qt]);

    if(qt == 0)
        return 0;
    else escreveInvertido(A, qt-1);
}

int main()
{
    char* nome = "Eduardo";

    int qt = contaQtLetras(nome);
    escreveInvertido(nome, qt);
    return 0;
}
