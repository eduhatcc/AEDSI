#include <stdio.h>
#include <stdlib.h>
#define MAX 15

void concatenar(char strA[MAX], char strB[MAX], char strC[MAX*2]) {
    int i = 0;
    int j = 0;

    while(strA[i] != '\0')
    {
        strC[i] = strA[i];
        i++;
    }

    while(strB[j] != '\0')
    {
        strC[i] = strB[j];
        i++;
        j++;
    }

    strC = '\0';
}

void escStr(char str[]) {
    printf("%s \n", str);
}

int main()
{
    char strA[MAX] = "Eduardo";
    char strB[MAX] = "Henrique";
    char strC[MAX*2];

    concatenar(strA, strB, strC);

    printf("\nEscrevendo a primeira string...\n");
    escStr(strA);

    printf("\nEscrevendo a segunda string...\n");
    escStr(strB);

    printf("\nEscrevendo a string concatenada...\n");
    escStr(strC);

    return 0;
}
