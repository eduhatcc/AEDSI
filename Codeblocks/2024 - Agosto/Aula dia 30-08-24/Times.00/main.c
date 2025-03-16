#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    //VARIÁVEIS
    int atleticanos = 0;
    int cruzeirenses = 0;
    int outros = 0;
    char time;
    bool erro;

   do{
        printf("\nCaso queira encerrar o programa, digite [X] para sair: \n\n");
        printf("\n['A' para Atletico], ['C' para Cruzeiro] ou ['O' para Outros].") ;
        printf("\n\nEscolha o time [A/C/O]: ");
        scanf(" %c", &time);
        time = tolower(time);
        erro = time != 'a' && time != 'c' && time != 'o' && time != 'x';
        if (erro)
        {
            printf("\n Apenas A, C, O, X");
        }
    }while(erro);

    //CALCULO DOS TORCEDORES
    while(time != 'x')
    {
        switch (time)
        {
            case 'a': atleticanos++;
                      break;
            case 'c': cruzeirenses++;
                      break;
            case 'o': outros++;
                      break;
        } // FIM SWITCH

        printf("\n\nEscolha o time [A/C/O] ou [X] para sair: ");
        scanf(" %c",&time);
        time = tolower(time);
    } // FIM WHILE

    int total = atleticanos + cruzeirenses + outros;
    float percentual_atleticanos = atleticanos /(float)total * 100;
    float percentual_cruzeirenses = cruzeirenses /(float)total * 100;
    float percentual_outros = outros /(float)total*100;

    printf("\n Atleticanos: %.2f%%", percentual_atleticanos);
    printf("\n Cruzeirenses: %.2f%%", percentual_cruzeirenses);
    printf("\n Outros: %.2f%%", percentual_outros);

    return 0;
} // FIM DA MAIN
