#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Controle de maior e menor nota da turma");

    int n;

    do{
        printf("\n Tamanho da turma: ");
        scanf("%i", &n   );
    } while(n < 0); // fim primeiro while

    //floats
    float nota;
    float maior = 0;
    float menor = 100;
    float soma = 0;
    float media = soma / n;

    for(int i= 1; i <= n; i++)
        do {
            printf("\n Digite a nota [0 a 100]: ");
            scanf("%f", &nota);
        } while(nota < 0 || nota > 100); // fim segundo while

        soma += nota;
        if(nota > maior)
            maior = nota;
        if(nota < menor)
            menor = nota;

            //exibir o resultado
        if(nota >= 60)
            {
                printf("\nAprovado.");
            }
        else {
                printf("\nReprovado.");
        }

        // exibe maior, menor e media
        printf("\n Maior nota = %1.f", maior);
        printf("\n Menor nota = %1.f", menor);
        printf("\n Media nota = %1.f", media);



    return 0;

} //fim da main
