#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int numVogaisIterativo(char* nome)
{
    int i = 0;
    int qt = 0;

    while(nome[i] != '\0')
    {
        if(nome[i] == 'a' || nome[i] == 'u')
        {
            qt++;
        }
        i++;
    }

    return qt;
}

int numVogaisRecursivo(char* nome, int i)
{
    int qt = 0;

    if(nome[i] != '\0')
        {
            if(nome[i] == 'a' || nome[i] == 'u')
            {
                qt = 1 + numVogaisRecursivo(nome, i+1);
            } else qt = numVogaisRecursivo(nome, i+1);
        }

    return qt;
}

int main()
{
    char* nome = "Malu";
    int resp;
    bool erro;
    do{
        printf("\nComo voce deseja realizar o calculo de vogais? \n\n[1] Iterativo \n[2] Recursivo \n\n\tDigite: ");
        scanf("%d", &resp);
        erro = resp < 1 || resp > 2;
        if(erro)
        {
            printf("\nValor digitado incorreto! Tente novamente.\n");
        }
    }while(erro);

    switch(resp)
    {
        case 1: printf("\nHa %i vogais na string!\n", numVogaisIterativo(nome));
                break;
        case 2: printf("\nHa %i vogais na string!\n", numVogaisRecursivo(nome, 0));
                break;
    }

    return 0;
}
