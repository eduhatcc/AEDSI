#include <stdio.h>
#include <stdlib.h>

int tamanhoStrRec(char* str, int i)
{
    int qt = 0;

    if(str[i] != '\0')
    {
        qt = 1 + tamanhoStrRec(str, i+1);
    }

    return qt;
}


int tamanhoStr(char* str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main()
{
    char* nome = "Malu";
    printf("\nAlguma coisa = %i\n", tamanhoStr(nome));

    printf("\nAlguma coisa Recursiva = %i\n", tamanhoStrRec(nome, 0));

    return 0;
}
