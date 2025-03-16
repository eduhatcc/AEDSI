#include <stdio.h>
#include <stdlib.h>

// 1 - Construa uma função que receba um arranjo de reais e o seu tamanho. A função deverá trocar o primeiro elemento do arranjo com o último.
// 2 - Construa uma função que receba um arranjo de reais e o seu tamanho. A função deverá trocar dois elementos de lugar. As duas posições deverão também ser parametrizadas..

void apresentacao()
{
    printf("\nBem vindo ao programa!\n");
}

void func(float vet[])
{
    float digito = 0;

    for(int i=0; i < 10; i++)
    {
        printf("\nDigite o %i.o valor: \n", i+1);
        scanf("%f", &vet[i]);
    }
}

void maiorValor(float vet[])
{
    float aux = 0;
    float maior = vet[0];

    for(int i=1; i < 10; i++)
    {
        if(vet[i] > maior)
        {
            maior = vet[i];

        }

    }

    for(int i=1; i < 10; i++)
    {
        if(vet[i] == maior)
        {
            aux = vet[9];
            vet[9] = maior;
            vet[i] = aux;
        }
    }


}


void escreveValor(float vet[])
{
    printf("\n");
    for(int i=0; i < 10; i++)
        printf("%i.a posicao = %.2f, \n", i+1, vet[i]);
}

int main()
{
    apresentacao();

    float real[10];

    func(real);

    maiorValor(real);

    escreveValor(real);



    return 0;
}
