#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int qtLetras(char palavra[])
{
    int c = 0;
    int i = 0;

    while(palavra[i] != '\0') {
        c++;
        i++;
    }

    return c-1;
}

bool ehPalindromo(char palavra[])
{
    bool palindromo = true;
    int i = 0;
    int j = qtLetras(palavra);

    while(palindromo && i < j && j > i) {
        if(palavra[i] != palavra[j]) {
            palindromo = false;
        }
        i++; j--;
    }

    return palindromo;
}


int main()
{
    char palavra[] = "REVIVER";

    if(ehPalindromo(palavra)) {
        printf("\nEh palindromo!\n");
    } else {
        printf("\nNao eh palindromo!\n");
    }

    return 0;
}
