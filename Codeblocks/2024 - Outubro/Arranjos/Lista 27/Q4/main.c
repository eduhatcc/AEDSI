#include <stdio.h>
#include <stdlib.h>

const int MAX_STR = 50;

void lerStr(char str[], int i) {
    printf("Digite a %i.a string: ", i);
    fgets(str, MAX_STR, stdin);
    printf("\n\n");

    return str;
}

char* concatenar(char strA[], char strB[]) {
    char str[MAX_STR];

    str[MAX_STR] = strA[MAX_STR] + strB[MAX_STR];

    return str;
}

void escStr(char str[]) {
    printf("%s\n", str);
}

int main()
{
    char strA[MAX_STR];
    lerStr(strA, 1);

    char strB[MAX_STR];
    lerStr(strB, 2);

    char strC[MAX_STR * 2];
    concatenar(strA, strB);

    printf("\nEscrevendo a primeira string...\n\t");
    escStr(strA);

    printf("\nEscrevendo a primeira string...\n\t");
    escStr(strB);

    printf("\nEscrevendo a primeira string...\n\t");
    escStr(strC);

    return 0;
}
