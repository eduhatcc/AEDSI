#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float preco;
    float maior_preco_1 = 0;
    float maior_preco_2 = 2000;

    printf("Digite quantas vezes deseja colocar o preco das mercadorias: ");
    scanf("%d", &n);

    for(int i=1; i <= n; i++)
    {
        printf("\nDigite o valor da mercadoria: ");
        scanf("%f", &preco);

        if(preco > 0 && preco < 2000 && preco > maior_preco_1)
                maior_preco_1 = preco;


        if(preco > 2000 && preco > maior_preco_2)
                    maior_preco_2 = preco;
    }// Fim For

    printf("\nMaior preco ate R$2000,00: R$%.2f", maior_preco_1);
    printf("\nMaior preco apos R$2000,00: R$%.2f\n", maior_preco_2);


    return 0;
}
