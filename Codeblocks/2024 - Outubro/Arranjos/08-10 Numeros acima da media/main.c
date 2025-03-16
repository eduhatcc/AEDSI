#include <stdio.h>
#include <stdlib.h>

void LerIdades (int I[], int n)
{
    printf("\nDigite %i idades\n", n);

    for(int i=0; i < n; i++)
    {
        printf("\nDigite a %i.a idade: ", i+1);
        scanf("%i", &I[i]);
    } //fim for
} // fim LerIdades

int acimaMedia (int I[], int n)
{
    int soma = 0;
    int media = 0;
    int acima_media = 0;

    for(int i=1; i < n; i++)
    {
        soma += I[i];
    } //fim for soma

    printf("\nA soma das idades eh: %i", soma);
    media = soma/n;

    printf("\nA media das idades eh: %i", media);

    for(int i=1; i < n; i++)
    {
        if(I[i] > media)
        {
            acima_media++;
        } //fim if
    } //fim for acima media

    return acima_media;
} //fim acimaMedia

int main()
{
    printf("Programa que mostra a quantidade de idades acima da media\n");

    int idades[10];

    LerIdades(idades, 10);

    printf("\nHa %i alunos com idade acima da media.\n", acimaMedia(idades, 10));

    return 0;
}
