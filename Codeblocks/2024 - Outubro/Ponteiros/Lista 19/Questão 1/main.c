#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void calcPeso (float altura, char genero, float *peso_ideal)
{
    if(genero == 'F')
    {
        *peso_ideal = (62.1*altura)-44.7;
    }
    else {
        if (genero == 'M')
        {
            *peso_ideal = (72.7*altura)-58;
        }
        else {
            printf("Erro!!\nOs dados foram digitados incorretamente.\n");
        }
    }
}

int main()
{
    float *altura = malloc(sizeof(float));
    printf("\nDigite a sua altura: ");
    scanf("%f", altura);

    char *genero = malloc(sizeof(char));
    printf("\nDigite o seu genero: ");
    scanf(" %c", genero);
    *genero = toupper(*genero);

    float *peso_ideal = malloc(sizeof(float));

    calcPeso(*altura, *genero, peso_ideal);

    printf("\nO peso ideal eh: %f", *peso_ideal);

    return 0;
}
