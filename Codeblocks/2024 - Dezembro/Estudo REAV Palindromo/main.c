#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define TAM 7

bool ehPalindromo(char palavra[])
{
    bool eh = true;
    int i = 0;
    int j = TAM-1;

    while(eh && i < j){
        if(palavra[i] != palavra[j]){
            eh = false;
        }
        i++;
        j--;
    }
    return eh;
}

bool ehPalindromoRec(char palavra[], int i, int j)
{
    bool eh = true;

    if(i < j){
        if(palavra[i] == palavra[j-1]){
            ehPalindromoRec(palavra, i+1, j-1);
        }
        else{
            eh = false;
        }
    }
    return eh;
}

int main()
{
    char palavra[] = {"REVIVER"};

    if(ehPalindromo(palavra)){
        printf("\n[Iterativo] Eh palindromo!\n");
    }
    else{
        printf("\n[Iterativo] Nao eh palindromo!\n");
    }

    if(ehPalindromoRec(palavra, 0, TAM)){
        printf("\n[Recursivo] Eh palindromo!\n");
    }
    else{
        printf("\n[Recursivo] Nao eh palindromo!\n");
    }

    return 0;
}
