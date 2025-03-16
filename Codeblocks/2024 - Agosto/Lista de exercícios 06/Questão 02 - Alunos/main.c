#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    float nota;
    int alunos = 0;
    int aprovados = 0;
    int reprovados = 0;
    bool fora_do_dominio;

    do{
        printf("\nDigite a nota obtida [1 a 100] ou para sair do programa digite [0]: ");
        scanf("%f", &nota);

        fora_do_dominio = nota < 0 || nota > 100;

        if(nota != 0 && fora_do_dominio)
            printf("\nApenas de [0 a 100]: \n");

        if(nota > 0)
            alunos++;

        if(nota >=60)
            aprovados++;
        else reprovados++;

    }while(nota != 0); //fim da repetição


    float porcentagem_aprovados = aprovados/(float)alunos * 100;
    float porcentagem_reprovados = reprovados/(float)alunos * 100;

    printf("\n\nAlunos aprovados: %.1f%% ", &porcentagem_aprovados);
    printf("\nAlunos reprovados: %.1f%% \n", &porcentagem_reprovados);

    return 0;
}
