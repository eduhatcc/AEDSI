#include <stdio.h>
#include <stdlib.h>

void LerIdades (int vet[],int n)
{

    for(int i=0; i < n ; i++)
    {
        do {
        printf("\nDigite a %i.a idade [0 a 100]: ", i+1);
        scanf("%i", &vet[i]);
        } while (vet[i] < 0 || vet[i] > 100);

    } //fim for

}

int calculaMedia(int vet[], int n)
{
    int soma = 0;
    int media = 0;

    for(int i=0; i < n; i++)
    {
        soma += vet[i];
    }

    media = soma/n;

    return media;
}

int menorIdade(int vet[], int n)
{
    int menor_idade = 100;

    for(int i=0; i < n; i++)
    {
    if(vet[i] < menor_idade)
        {
            menor_idade = vet[i];
        }
    }

    return menor_idade;
}

int maiorIdade(int vet[], int n)
{
    int maior_idade = 0;

    for(int i=0; i < n; i++)
    {
    if(vet[i] > maior_idade)
        {
            maior_idade = vet[i];
        }
    }

    return maior_idade;
}

int acimaMedia(int vet[], int n, int media)
{
    int maior_que_Media = 0;

    for(int i=0; i < n; i++)
    {
        if(vet[i] > media)
        {
            maior_que_Media++;
        }

    } //fim for

    return maior_que_Media;
}

int main()
{
    printf("Calcular a media de idades\n");

    int n = 0;

    printf("\nDigite a quantidade de testes que sera feito: ");
    scanf("%i", &n);
    int idades[n];

    LerIdades(idades, n);

    int media = calculaMedia(idades, n);

    int menor_idade = menorIdade(idades, n);

    int maior_idade = maiorIdade(idades, n);

    int maior_que_Media = acimaMedia(idades, n, media);

    printf("\nA maior idade obtida foi: %i", maior_idade);

    printf("\nA menor idade obtida foi: %i", menor_idade);

    printf("\nA media de idades eh: %i", media);

    printf("\nQuantidade de idades acima da media: %i\n", maior_que_Media);

    return 0;
}
