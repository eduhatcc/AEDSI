#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n;

void apresentacao()
{
    printf("Bem vindo ao programa!\n");
}

void lerAprovados(float nota[])
{
    int aprovados = 0;
    for(int i=0; i < n; i++)
    {
        if(nota[i] >= 60)
            aprovados++;
    }

    printf("\nQuantidade de alunos aprovados = %d\n", aprovados);
}

void lerQntNotas()
{
    do{
        printf("\nSelecione a quantidade de notas a ser lida: ");
        scanf("%d", &n);
    }while (n < 1);

}

void lerNota(float nota[])
{
     lerQntNotas();
     bool erro;
     for(int i=0; i < n; i++)
     {
         do{
            printf("\nDigite a %i.a nota: ", i+1);
            scanf("%d", &nota[i]);
            erro = nota[i] < 0;

            if(erro)
            {
                printf("\nValor digitado incompatível!\n");
            }
         } while(erro);
     }
}

void lerAmplitude(float nota[])
{
    float menor = nota[0];
    float maior = nota[0];
    float amplitude = 0;

    for(int i=1; i < n; i++)
    {
        if(nota[i] < menor)
        {
            menor = nota[i];
        }

        if(nota[i] > maior)
        {
            maior = nota[i];
        }
    }

    amplitude = maior - menor;

    printf("\nA amplitude eh = %d\n", amplitude);
}

void despedir()
{
    printf("\nObrigado por usar o programa! \n");
}

int selecionar()
{
    int resp = 0;
    bool erro;

    do{
        printf("\nSelecione uma das opcoes: ");

        printf("\n[0] Sair \n[1] Cadastrar nota \n[2] Informar numero de alunos aprovados \n[3] Informar amplitude\n");

        do{
            scanf("%d", &resp);
            erro = resp < 0 || resp > 3;
            if(erro)
            {
                printf("\nO valor digitado foi incorreto! Tente novamente.\n");
            }
        } while(erro);

        float nota[n];

        switch(resp)
        {
            case 0: despedir();
                    break;

            case 1:
                    lerNota(nota);
                    break;

            case 2:
                    lerAprovados(nota);
                    break;

            case 3:
                    lerAmplitude(nota);
                    break;
        }
    } while (resp != 0);

    return resp;
}

int main()
{
    apresentacao();

    selecionar();



    return 0;
}
