#include <stdio.h>
#include <stdlib.h>

void arquivo()
{
    FILE *arquivo = fopen("arquivo.txt", "wb");

    float a, ler;
    printf("\nDigite a quantidade de valores: ");
    scanf("%f", &a);

    for(int i=0; i<=a; i++)
    {
        printf("\nDigite o %i.o valor: ", i+1);
        scanf("%f", &ler);
        fprintf(arquivo, "%f\n", ler);
    }
    fclose(arquivo);
}

float maior()
{
    FILE *arquivo = fopen("arquivo.txt", "rb");

    float maior = 0;
}

void arquivo2()
{
    FILE *arquivo = fopen("arquivo.txt", "rb");

    float maior;
    float menor;
}

int main()
{
    arquivo();

    float maior = numMaior();
    float menor = numMenor();

    arquivo2();

    return 0;
}
