#include <stdio.h>
#include <stdlib.h>

float lerValores(char* exemplo)
{
    FILE* arq = fopen("exemplo.txt", "wb");

    printf("\n\tDigite 5 valores");

    float n;
    for(int i=0; i < 5; i++)
    {
        printf("\nDigite o %i valor: ", i+1);
        scanf("%f", &n);
        fprintf(arq, "%.2f\n", n);
    }

    fclose(arq);
}

float lerAmplitude(char* exemplo)
{
    FILE* arq = fopen("exemplo.txt", "rb");

    float n;
    float maior;
    float menor;

    fscanf(arq, "%f", &n);
    maior = n;
    menor = n;

    while(!feof(arq))
    {
        if(n > maior)
            maior = n;
        else if(n < menor)
            menor = n;

        fscanf(arq, "%f", &n);
    }
    fclose(arq);

    return maior - menor;
}

int main()
{
    char* exemplo;

    lerValores(exemplo);

    printf("\n\nA amplitude eh = %.2f", lerAmplitude(exemplo));

    return 0;
}
