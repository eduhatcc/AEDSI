#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n; //variável global
float nota[]; //variável global
int aprovados = 0; //variável global

void apresentacao()
{
    printf("Bem vindo ao programa!\n");
}

void despedir()
{
    printf("\nObrigado por usar o programa! \n");
}

float lerAprovados(float nota[], int a, int i)
{
        if(nota[i] >= 60)
            aprovados++;

    if(a == 0)
    {
        printf("\nQuantidade de alunos aprovados = %d\n", aprovados);
        return 0;
    }

    lerAprovados(nota, a-1, i+1);
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
     //lerQntNotas();
     bool erro;
     for(int i=0; i < n; i++)
     {
         do{
            printf("\nDigite a %i.a nota: ", i+1);
            scanf("%f", &nota[i]);
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

    float amplitude = maior - menor;

    printf("\nA amplitude eh = %.2f\n", amplitude);
}


void selecionar()
{
    int resp = 0;
    bool erro;

    do{
        printf("\nSelecione uma das opcoes: ");

        printf("\n[0] Sair \n[1] Cadastrar nota \n[2] Informar numero de alunos aprovados \n[3] Informar amplitude\nDigite: ");

        do{
            scanf("%d", &resp);
            erro = resp < 0 || resp > 3;
            if(erro)
            {
                printf("\nO valor digitado foi incorreto! Tente novamente.\n");
            }
        } while(erro);

        switch(resp)
        {
            case 0: despedir();
                    break;
            case 1:
                {
                    lerQntNotas();
                    nota[n];
                    lerNota(nota);
                    break;
                }
            case 2:
                    lerAprovados(nota, n, 0);
                    break;
            case 3:
                    lerAmplitude(nota);
                    break;
        }
    } while (resp != 0);
}

int main()
{
    apresentacao();

    selecionar();

    return 0;
}
