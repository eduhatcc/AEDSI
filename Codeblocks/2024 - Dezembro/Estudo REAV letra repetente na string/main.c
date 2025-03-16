#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int qtIguais(char palavra[], char letra)
{
    int qt = 0;
    int i = 0;
    letra = toupper(letra);
    palavra = toupper(palavra);

    while(palavra[i] != '\0'){
        if(palavra[i] == letra){
            qt++;
        }
        i++;
    }
    return qt;
}

int qtIguaisRec(char palavra[], char letra, int i)
{
    int qt = 0;

    if(palavra[i] != '\0'){
        palavra = toupper(palavra);
        letra = toupper(letra);

        if(palavra[i] == letra){
            qt = 1;
        }
        qt += qtIguaisRec(palavra, letra, i+1);
    }
    return qt;
}

int main()
{
    char palavra[] = {"PATRICIAAAA"};
    char letra = 'a';

    int qt = qtIguais(palavra, letra);

    int qtRec = qtIguaisRec(palavra, letra, 0);

    printf("[Iterativo] Iguais = %d\n", qt);

    printf("\n[Recursivo] Iguais = %d\n", qtRec);

    return 0;
}
