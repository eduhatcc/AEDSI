#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int n;
float nota[];

void apresentacao()
{
    printf("\n\tBem vindo ao programa!\n");
}

void despedir()
{
    printf("\nObrigado por usar o programa! \n");
}


void lerQntNotas()
{
    do{
        printf("\nSelecione a quantidade de notas a ser lida: ");
        scanf("%d", &n);
    }while (n < 1 || n > 80);

}

void lerNota(float nota[])
{
     //lerQntNotas();
     bool erro;
     for(int i=0; i < n; i++)
     {
         do{
            printf("\nDigite a %i.a nota [0 a 100]: ", i+1);
            scanf("%f", &nota[i]);
            erro = nota[i] < 0 || nota[i] > 100;

            if(erro)
            {
                printf("\nValor digitado incompatível!\n");
            }
         } while(erro);
     }
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
        printf("\n\tMenu de opcoes: ");

        printf("\n[0] Sair");
        printf("\n[1] Cadastrar nota");
        printf("\n[2] Informar numero de alunos aprovados");
        printf("\n[3] Informar amplitude");
        printf("\n\n\tDigite sua opcao: ");

        do{
            scanf("%d", &resp);
            erro = resp < 0 || resp > 3;
            if(erro)
            {
                printf("\n\aO valor digitado foi incorreto! Tente novamente.\n");
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
                    lerAprovados(nota);
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
