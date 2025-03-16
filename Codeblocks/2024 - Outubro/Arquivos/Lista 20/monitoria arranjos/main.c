#include <stdio.h>
#include <stdlib.h>
#define _MAX 10

// 1 - Construa uma função que receba um arranjo de reais e o seu tamanho. A função deverá trocar o primeiro elemento do arranjo com o último.
// 2 - Construa uma função que receba um arranjo de reais e o seu tamanho. A função deverá trocar dois elementos de lugar. As duas posições deverão também ser parametrizadas..


void apresentacao()
{
    printf("\nBem vindo ao programa!\n");
}

void func(float vet[])
{
    for(int i=0; i < _MAX; i++)
    {
        printf("\nDigite o %i.o valor: \n", i+1);
        scanf("%f", &vet[i]);
    }
}

void troca(float vet[i], float vet[j])
{
            float aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
}

void menorValor(float vet[])
{
    for(int i=0; i > _MAX-1; i++)
    {
        for(int j=0; j < _MAX -1; j++)
            if(vet[j] > vet[j+1])
            {
                troca(vet[j], vet[j+1]);
            }
    }
}


void escreveValor(float vet[])
{
    printf("\n");
    for(int i=0; i < _MAX; i++)
        printf("%i.a posicao = %.2f, \n", i+1, vet[i]);
}

int main()
{
    apresentacao();

    float real[_MAX];

    func(real);

    menorValor(real);

    escreveValor(real);

    return 0;
}
