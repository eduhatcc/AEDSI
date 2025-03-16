#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool ehIgual(char* A[], char* B[]){
    bool ehIgual = true;
    int i=0;
    while(A[i] != B[i] != '\0')
    {
        A = toupper(A);
        B = toupper(B);
        if(A[i] != B[i]){
            ehIgual = false;
        }
        i++;
    }
    return ehIgual;
}

int main()
{
    char* nome0 = "Eduardo";
    char* nome1 = "Eduardo";

    if(ehIgual(nome0, nome1))
        printf("\nSao iguais!\n");
    else printf("\nNao sao iguais!\n");

    return 0;
}
