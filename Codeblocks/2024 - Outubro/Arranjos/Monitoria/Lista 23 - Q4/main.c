#include <stdio.h>
#include <stdlib.h>

// 1 - Construa uma fun��o que receba um arranjo de reais e o seu tamanho. A fun��o dever� trocar o primeiro elemento do arranjo com o �ltimo.
// 2 - Construa uma fun��o que receba um arranjo de reais e o seu tamanho. A fun��o dever� trocar dois elementos de lugar. As duas posi��es dever�o tamb�m ser parametrizadas..

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

void menorValor(float vet[])
{
    float aux = 0;
    float menor = vet[0];

    for(int i=1; i < 10; i++)
    {
        if(vet[i] < menor)
        {
            menor = vet[i];

        }

    }

    for(int i=1; i < 10; i++)
    {
        if(vet[i] == menor)
        {
            aux = vet[0];
            vet[0] = menor;
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

    menorValor(real);

    escreveValor(real);

    return 0;
}
