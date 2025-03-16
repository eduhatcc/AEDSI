#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 10

int qtLetras(char str[])
{
    int i = 0;

    while(str[i] != '\0') {
        i++;
    }

    return i-1;
}

void escreveSegundaInverso(char str1[], char str2[])
{
    int i = 0;
    int j = qtLetras(str1);

    while(str1[i] != '\0') {
        str2[j] = str1[i];
        i++;
        j--;
    }
    str2[i] = '\0';
}

int main()
{
    char str1[MAX_STR] = "ROMA";
    char str2[MAX_STR];

    escreveSegundaInverso(str1, str2);

    printf("\nPrimeira string = %s", str1);
    printf("\nSegunda string = %s\n", str2);

    return 0;
}
