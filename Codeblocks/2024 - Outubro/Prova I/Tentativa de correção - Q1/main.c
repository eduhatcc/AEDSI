#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func(int valor_1, int valor_2)
{
    bool sao_primos = false;
    int divisor = 2;
    if(divisor > 1 && divisor < valor_1 && divisor < valor_2)
    {
        int valor_aux1 = valor_1 % divisor;
        int valor_aux2 = valor_2 % divisor;

        if(valor_aux1 != 0 && valor_aux2 != 0)
        {
            sao_primos = true;
        }
    }
    return sao_primos;
}

int main()
{
    int valor_1;
    int valor_2;

    printf("Digite o primeiro valor\n");
    scanf("%i", &valor_1);

    printf("\nDigite o segundo valor\n");
    scanf("%i", &valor_2);

    if(func(valor_1, valor_2))
    {
        printf("\n%i e %i sao primos entre si!\n", valor_1, valor_2);
    }
        else
        {
            printf("\n%i e %i nao sao primos entre si!\n", valor_1, valor_2);
        }

    return 0;
}
