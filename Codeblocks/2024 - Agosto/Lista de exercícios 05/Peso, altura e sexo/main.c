#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura;
    float peso_ideal;
    char genero;

    //SOLICITAR ALTURA
    printf("Digite sua altura. (Exemplo: 1.75): ");
    scanf("%f", &altura);

    //SOLICITAR GENERO
    printf("\nQual o seu genero? [F/M]: ");
    scanf(" %c", &genero);

    //CALCEULAR PESO IDEAL COM BASE NO GÊNERO
    if(genero == 'M' || genero == 'm')
    {
        peso_ideal = ((72.7*altura)-58);
    }
    else{
            if(genero == 'F' || genero == 'f')
            {
                peso_ideal = ((62.1*altura)-44.7);
            }
            else {
                printf("\nErro!!\nOs dados foram digitados incorretamentes.\n");
                return 1;
            }

    }

    printf("\nO peso ideal para uma altura de %.2f metros e genero %c eh %.2f kg. \n", altura, genero, peso_ideal);

    return 0;
}
