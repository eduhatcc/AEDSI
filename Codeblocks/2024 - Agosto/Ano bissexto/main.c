#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ano;
    char continua;
    bool ehbissexto;
    bool fora_do_dominio;

    do {
        printf("Digite o ano: ");
        scanf("%d", &ano);
        ehbissexto=(ano % 4 == 0 && ano % 100 == 0) || (ano % 400 ==0);
        if(ehbissexto)
        {
            printf("\nO ano %d eh bissexto!", ano);
        }
        else {
            printf ("\nO ano %d nao eh bissexto!", ano);
        }

        do {
            printf("\n\n\a Deseja fazer o teste mais uma vez? [S/N]: ");
            scanf(" %c", &continua);
            continua=toupper(continua);
            fora_do_dominio= continua != 'S' && continua != 'N';
            if(fora_do_dominio)
            printf("\n\nApenas S ou N");
        } while (fora_do_dominio);
    }while (continua == 'S');

return 0;

}
