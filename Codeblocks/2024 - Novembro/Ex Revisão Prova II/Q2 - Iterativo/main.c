#include <stdio.h>
#include <stdlib.h>

int TAM = 5;

typedef struct
{
    int ano[] = {2013, 2014, 2015, 2016, 2017};
    char campeao[TAM] = {"Cruzeiro", "Atletico", "Flamengo", "Cruzeiro", "Cruzeiro"};
} CampeonatoBrasileiro;

void despedida()
{
    printf("Obrigado por usar o programa")
}

void listeTimes(CampeonatoBrasileiro times)
{

}

int main()
{
    int resp = 0;
    do {
        do {
            printf("\n\tEscolha sua opcao: ");
            printf("\n[0] Sair");
            printf("\n[1] Liste times");
            printf("\n[2] Liste anos");
            printf("\n[3] Liste campeoes");
            printf("\n\tSua escolha: ");
            scanf("%d", &resp);
        } while(resp < 0 && resp > 2);

        switch(resp) {
            case 0: despedida();
                    break;
            case 1: listeTimes(CampeonatoBrasileiro);
                    break;
            case 2: listeAnos(CampeonatoBrasileiro);
                    break;
            case 3: listeCampeao(CampeonatoBrasileiro);
                    break;

        }
    } while(resp != 0);
    return 0;
}
