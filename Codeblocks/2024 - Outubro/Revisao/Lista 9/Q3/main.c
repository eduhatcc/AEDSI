#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    float salario_minimo;
    int num_funcionarios;
    int num_funcionarios_salario_minimo = 0;
    float maior_salario = 0;
    float menor_salario = 1000000;

    printf("Digite o numero de funcionarios na empresa: ");
    scanf("%d", &num_funcionarios);

    if(num_funcionarios > 0)
    {
        for(int i=1; i<=num_funcionarios; i++)
        {
            printf("\nDigite o salario de cada funcionario: ");
            scanf("%f", &salario);

            if(salario >= 1400 && salario <= 1500)
            {
                salario_minimo++;
                num_funcionarios_salario_minimo++;
            } // End if salário minimo

            if(salario < menor_salario)
            {
                menor_salario = salario;
            } // End if menor salário

            if(salario > maior_salario)
            {
                maior_salario = salario;
            } // End if maior salário

        } // End for número de funcionarios

    int percentual_funcionarios_salario_minimo = num_funcionarios_salario_minimo / (float)num_funcionarios * 100;

    printf("\nA empresa possui %d funcionarios. ", num_funcionarios);
    printf("\nA empresa possui %d funcionarios recebendo apenas um salario minimo. ", num_funcionarios_salario_minimo);
    printf("\nA porcentagem de funcionarios recebendo apenas um salario minimo eh de %d%%. ", percentual_funcionarios_salario_minimo);
    printf("\nO maior salario registrado foi R$%.2f", maior_salario);
    printf("\nO menor salario registrado foi R$%.2f\n", menor_salario);

    } // End if número de funcionários
    else printf("\nO valor digitado %d nao eh valido, pois nao eh maior ou igual a 1. \nTente novamente! \n", num_funcionarios);


    return 0;
}
