#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    //VARIÁVEIS
    float salario_Bruto = 0;
    int numero_viagens = 0;
    float valor_passagem = 0;
    float salario_Final = 0;
    int opcao;
    bool fora_do_dominio;
    //FIM DAS VARIÁVEIS

    do{
        //MENSAGEM PARA O USUÁRIO
        printf("\nMenu de opcoes \n\n");

        // OPÇÕES DO USUÁRIO JOGAR
        printf("\n 0 - Sair");
        printf("\n 1 - informar salario");
        printf("\n 2 - Informar numero de viagens");
        printf("\n 3 - Informar valor da passagem");
        printf("\n 4 - Calcular salario");

        do{
            printf("\n\n Sua opcao: ");
            scanf("%i", &opcao);
            fora_do_dominio = opcao<0 || opcao>4;
            if(fora_do_dominio)
               printf("\n O numero digitado eh incorreto!");
        }while(fora_do_dominio);
         // FIM DAS OPÇÕES DO USUÁRIO JOGAR

        //PROCESSANDO A OPÇÃO ESCOLHIDA
        switch(opcao)
        {
            case 0: printf("\n Valeu, meu chapa! \n");
                    break;

            case 1: printf("\n Salario Bruto: ");
                    scanf("%f", &salario_Bruto);
                    break;

            case 2: printf("\n Numero de viagens: ");
                    scanf("%i", &numero_viagens);
                    break;

            case 3: printf("\n Valor da passagem: ");
                    scanf("%f", &valor_passagem);
                    break;

            case 4: salario_Final = salario_Bruto + (numero_viagens * valor_passagem);
                    printf("\n Salario final = %.2f", salario_Final);
        } //FIM DA SWITCH
    }while(opcao !=0);

    return 0;
} // FIM DA MAIN
