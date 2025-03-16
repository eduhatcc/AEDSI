#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int func(int valor_1, int valor_2)
{
    bool sao_primos = true;
    int menor = 0;

    if(valor_1 < valor_2)
    {
        menor = valor_1;
    } else {
            menor = valor_2;
        }

    for(int i=2; i <= menor; i++)
    {
        if(valor_1 % i == 0 && valor_2 % i == 0)
        {
            sao_primos = false;
        }
    }

    return sao_primos;
}

int main()
{
    int valor_1 = 0;
    int valor_2 = 0;

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

#include <stdbool.h>

bool teste =
