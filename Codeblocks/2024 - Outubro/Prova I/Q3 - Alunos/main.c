#include <stdio.h>
#include <stdlib.h>

void LerNotas (int vet[],int n)
{

    for(int i=0; i < n ; i++)
    {
        do {
        printf("\nDigite a %i.a nota [0 a 100]: ", i+1);
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

int acimaMedia(int vet[], int n, int media)
{
    int maior_que_Media = 0;
    int menor_nota = 100;
    int maior_nota = 0;

    for(int i=0; i < n; i++)
    {
        if(vet[i] > media)
        {
            maior_que_Media++;
        }

        if(vet[i] < menor_nota)
        {
            menor_nota = vet[i];
            continue;
        }

        if(vet[i] > maior_nota)
        {
            maior_nota = vet[i];
        }
    } //fim for

    printf("\nA maior nota obtida foi: %i", maior_nota);

    printf("\nA menor nota obtida foi: %i", menor_nota);

    return maior_que_Media;
}

int main()
{
    printf("Calcular a media de notas da turma\n");

    int n;
    printf("\nDigite a quantidade de alunos: ");
    scanf("%i", &n);
    int notas[n];

    LerNotas(notas, n);

    int media = calculaMedia(notas, n);

    int maior_que_Media = acimaMedia(notas, n, media);

    printf("\nA media de notas eh: %i", media);

    printf("\nQuantidade de notas acima da media: %i\n", maior_que_Media);

    return 0;
}
