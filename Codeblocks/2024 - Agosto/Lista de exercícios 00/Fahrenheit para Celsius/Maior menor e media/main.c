#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Controle de maior e menor nota da turma");

    int n;

    do{
        printf("\n Tamanho da turma: ");
        scanf("%i", &n);

    } while(n < 0); // fim primeiro while

    //floats
    float nota;
    float maior = 0;
    float menor = 100;
    float soma = 0;
    int pessoas = 0;

    for(int i= 1; i <= n; i++)
        do {
            printf("\n Digite a nota [0 a 100]: ");
            scanf("%f", &nota);
            pessoas = pessoas + 1;
            soma = soma + nota;

        } while(nota < 0 || nota > 100); // fim segundo while

        if (nota > maior || nota < menor)
        if (nota > maior )
        {
            nota = maior ;
        }
        else { if (nota < menor)
                {
                    nota = menor; 
                }
        }
        //exibir o resultado
        if(nota >= 60)
        printf("\nAprovado.");

        else  printf("\nReprovado.");


        // exibe maior, menor e media

        float media = soma/n;
        printf("\n Maior nota = %.1f", maior);
        printf("\n Menor nota = %.1f", menor);
        printf("\n Media nota = %.1f", media);
        printf("\n Total de pessoas: %i \n\n", n);

    return 0;

} //fim da main
