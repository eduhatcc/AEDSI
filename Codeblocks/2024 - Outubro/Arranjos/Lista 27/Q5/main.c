#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool ehIgual(char str0[], char str1[], int i) {
    bool eh = true;

    toupper(str0[i]);
    toupper(str1[i]);

    if(str0[i] != str1[i]) {
        eh = false;
    }

    if(eh)
        ehIgual(str0, str1, i+1);
    else return eh;
}

int main()
{
    char* str0 = "Eduardo";
    char* str1 = "Henrique";

    if(ehIgual(str0, str1, 0))
        printf("Sao iguais!\n");
    else
        printf("Nao sao iguais!\n");


    return 0;
}
